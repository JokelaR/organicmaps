#include "testing/testing.hpp"

#include "partners_api/partners_api_tests/download_on_map_container_delegate.hpp"

#include "partners_api/ads/tinkoff_insurance_ads.hpp"

UNIT_TEST(TinkoffInsurance_GetBanner)
{
  DownloadOnMapContainerDelegateForTesting delegate;
  ads::TinkoffInsurance tinkoffInsurance(delegate);

  {
    delegate.SetTopmostNodes({"France", "Russian Federation"});
    auto const banner = tinkoffInsurance.GetBanner("", {}, "ru");
    TEST(!banner.empty(), ());
  }
  {
    delegate.SetTopmostNodes({"France", "Russian Federation"});
    auto const banner = tinkoffInsurance.GetBanner("", {}, "en");
    TEST(banner.empty(), ());
  }
  {
    delegate.SetTopmostNodes({"France", "Cote dIvoire"});
    auto const banner = tinkoffInsurance.GetBanner("", {}, "ru");
    TEST(banner.empty(), ());
  }
  {
    delegate.SetTopmostNodes({"Nepal"});
    delegate.SetCountryId("Russian Federation");
    auto const banner = tinkoffInsurance.GetBanner("", {}, "ru");
    TEST(!banner.empty(), ());
  }
  {
    delegate.SetTopmostNodes({"Nepal"});
    delegate.SetCountryId("Norway");
    auto const banner = tinkoffInsurance.GetBanner("", {}, "ru");
    TEST(banner.empty(), ());
  }
}
