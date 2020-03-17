#include "partners_api/ads/tinkoff_allairlines_ads.hpp"

namespace
{
std::initializer_list<std::string> const kSupportedLanguages = {"ru"};

std::initializer_list<storage::CountryId> const kSupportedCountries = {
  "Germany",
  "Poland",
  "Ukraine",
  "Turkey",
  "Finland",
  "Belarus",
  "China",
  "Japan",
  "Thailand",
  "India",
  "Switzerland",
  "Norway",
  "Belgium",
  "Sweden",
  "Georgia",
  "Kazakhstan",
  "South Ossetia",
  "Armenia",
  "Egypt",
  "Argentina",
  "Mongolia",
  "Uzbekistan",
  "Cambodia",
  "Liechtenstein",
  "Iceland",
  "Myanmar",
  "Taiwan",
  "Saudi Arabia",
  "Macedonia",
  "Chile",
  "Peru",
  "Kyrgyzstan",
  "Turkmenistan",
  "Syria",
  "Seychelles",
  "Oman",
  "Gibraltar",
  "Pakistan",
  "Qatar",
  "Venezuela",
  "New Zealand South",
  "New Zealand North",
  "Tajikistan",
  "Colombia",
  "Nagorno-Karabakh",
  "The Bahamas",
  "Republic of Kosovo",
  "Antarctica",
  "Iraq",
  "North Korea",
  "Laos",
  "Mauritius",
  "Algeria",
  "British Indian Ocean Territory",
  "Afghanistan",
  "Ecuador",
  "Bahrain",
  "Sudan",
  "Jamaica",
  "Zimbabwe",
  "Zambia",
  "Yemen",
  "Lebanon",
  "Bolivia",
  "Kuwait",
  "Greenland",
  "Kenya",
  "Vanuatu",
  "Panama",
  "Uruguay",
  "Madagascar",
  "Tokelau",
  "Haiti",
  "Cameroon",
  "Dominica",
  "Faroe Islands",
  "Costa Rica",
  "Papua New Guinea",
  "United States Virgin Islands",
  "Congo-Kinshasa",
  "Tonga",
  "Uganda",
  "Belize",
  "Swaziland",
  "Tuvalu",
  "Nigeria",
  "Namibia",
  "South Sudan",
  "Paraguay",
  "Campo de Hielo Sur",
  "The Gambia",
  "Honduras",
  "Cayman Islands",
  "South Georgia and the South Sandwich Islands",
  "Botswana",
  "Bangladesh",
  "Kingdom of Lesotho",
  "Libya",
  "Caribisch Nederland",
  "Turks and Caicos Islands",
  "Solomon Islands",
  "East Timor",
  "Senegal",
  "Mali",
  "Cape Verde",
  "Barbados",
  "Bermuda",
  "Antigua and Barbuda",
  "Martinique",
  "Nauru",
  "Saint Martin",
  "Fiji",
  "Guadeloupe",
  "Jersey",
  "Guernsey",
  "Ethiopia",
  "Grenada",
  "Burundi",
  "Sao Tome and Principe",
  "Saint Lucia",
  "Palau",
  "Rwanda",
  "Central African Republic",
  "Nicaragua",
  "Kiribati",
  "Bhutan",
  "Falkland Islands",
  "Guatemala",
  "Guinea-Bissau",
  "Anguilla",
  "Somalia",
  "Pitcairn Islands",
  "Mauritania",
  "Montserrat",
  "Niger",
  "Liberia",
  "Saint Kitts and Nevis",
  "British Virgin Islands",
  "Djibouti",
  "Samoa",
  "Saint Vincent and the Grenadines",
  "Chad",
  "Eritrea",
  "Sierra Leone",
  "Mozambique",
  "Benin",
  "Saint Barthelemy",
  "Saint Helena Ascension and Tristan da Cunha",
  "Marshall Islands",
  "Brunei",
  "Isle of Man",
  "Guinea",
  "Federated States of Micronesia",
  "Niue",
  "Comoros",
  "Sahrawi Arab Democratic Republic",
  "Congo-Brazzaville",
  "Angola",
  "Cook Islands",
  "Suriname",
  "Malawi",
  "Willis Island",
  "Trinidad and Tobago",
  "Gabon",
  "Togo",
  "Equatorial Guinea",
  "Guyana",
  "Burkina Faso",
  "El Salvador",
  "Ghana",
  "Cote dIvoire"
};

std::initializer_list<storage::CountryId> const kSupportedUserPosCountries = {"Russian Federation"};
}  // namespace

namespace ads
{
TinkoffAllAirlines::TinkoffAllAirlines(Delegate & delegate)
  : DownloadOnMapContainer(delegate)
{
  AppendSupportedUserLanguages(kSupportedLanguages);
  AppendSupportedCountries(kSupportedCountries);
  AppendSupportedUserPosCountries(kSupportedUserPosCountries);
}

std::string TinkoffAllAirlines::GetBannerInternal() const
{
  return "https://www.tinkoff.ru/cards/credit-cards/all-airlines/form/?"
         "promo_code=MAPSME&utm_source=mapsme_allairlines&utm_medium=dsp.fix";
}
}  // namespace ads
