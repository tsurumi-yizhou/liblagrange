//
// Created by Don Yihtseu on 24-12-20.
//

export module config;

import standard;

namespace config {

export struct app_info {
    std::string os;
    std::string vendor;
    std::string kernel;
    std::string version;
    std::int32_t misc_bitmap;
    std::string pt_version;
    std::int32_t sso_version;
    std::string package_name;
    std::string wtlogin_sdk;
    std::int32_t app_id;
    std::int32_t sub_app_id;
    std::int32_t app_id_qrcode;
    std::uint16_t app_client_version;
    std::uint32_t main_sig_map;
    std::uint16_t sub_sig_map;
    std::uint16_t ntlogin_type;
};

}