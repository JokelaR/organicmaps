#pragma once

#include "map/purchase.hpp"

#include "partners_api/ads/ads_engine.hpp"
#include "partners_api/promo_api.hpp"

#include "storage/country_info_getter.hpp"
#include "storage/storage.hpp"
#include "storage/storage_defines.hpp"

#include "geometry/point2d.hpp"

#include <string>

namespace ads
{
class DownloadOnMapDelegate : public Engine::Delegate
{
public:
  DownloadOnMapDelegate(storage::CountryInfoGetter const & infoGetter,
                        storage::Storage const & storage, promo::Api const & promoApi,
                        Purchase const & purchase);

  // Engine::Delegate overrides:
  bool IsAdsRemoved() const override;

  // DownloadOnMapContainer::Delegate overrides:
  storage::CountryId GetCountryId(m2::PointD const & pos) override;
  storage::CountriesVec GetTopmostNodesFor(storage::CountryId const & mwmId) const override;
  std::string GetMwmTopCityGeoId(storage::CountryId const & mwmId) const override;
  std::string GetLinkForGeoId(std::string const & id) const override;

private:
  storage::CountryInfoGetter const & m_countryInfoGetter;
  storage::Storage const & m_storage;
  promo::Api const & m_promoApi;
  Purchase const & m_purchase;
};
}  // namespace ads