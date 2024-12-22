//
// Created by Don Yihtseu on 24-12-20.
//

export module system;

import standard;
import protobuf;

export namespace sys {

struct sec_info {
    proto::field<1, proto::bytes> sec_sign;
    proto::field<2, proto::string> sec_token;
    proto::field<3, proto::bytes> sec_extra;
};

struct nt_device_sign {
    proto::field<15, proto::string> trace;
    proto::field<16, proto::string> uid;
    proto::field<24, sec_info> sign;
};

struct nt_os {
    proto::field<1, proto::string> os;
    proto::field<2, proto::string> name;
};

struct nt_packet_uid {
    proto::field<16, proto::string> uid;
};

struct nt_sso_heartbeat {
    proto::field<1, proto::int32> type;
};

struct nt_sys_event_sub {
    proto::field<2, proto::int64> state;
    proto::field<5, proto::int64> uin;
    proto::field<6, proto::int32> flag;
    proto::field<7, proto::int32> on;
    proto::field<8, proto::uint32> group_uin;
};

struct nt_sys_event {
    proto::field<1, proto::string> ip;
    proto::field<2, proto::int64> sid;
    proto::field<3, nt_sys_event_sub> sub;
};

struct online_business_info {
    proto::field<1, proto::uint32> notify_switch;
    proto::field<2, proto::uint32> bind_uin_notify_switch;
};

struct online_device_info {
    proto::field<1, proto::string> user;
    proto::field<2, proto::string> os;
    proto::field<3, proto::string> version;
    proto::field<4, proto::string> vendor;
    proto::field<5, proto::string> os_lower;
};

struct register_info {
    proto::field<1, proto::string> guid;
    proto::field<2, proto::int32> kick;
    proto::field<3, proto::string> version;
    proto::field<4, proto::int32> is_first_register_proxy_online;
    proto::field<5, proto::int32> locale_id;
    proto::field<6, online_device_info> device;
    proto::field<7, proto::int32> set_mute;
    proto::field<8, proto::int32> register_vendor_type;
    proto::field<9, proto::int32> register_type;
    proto::field<10, online_business_info> business;
    proto::field<11, proto::int32> battery;
};

struct register_response {
    proto::field<2, proto::string> message;
    proto::field<3, proto::uint32> timestamp;
};

struct service_kick_nt_response {
    proto::field<1, proto::uint32> uin;
    proto::field<3, proto::string> tips;
    proto::field<4, proto::string> title;
};

struct sso_c2_cookie {
    proto::field<1, proto::uint64> last_message_time;
};

struct sso_c2_sync {
    proto::field<1, sso_c2_cookie> c2c_cookie;
    proto::field<2, proto::uint64> last_message_time;
    proto::field<3, sso_c2_cookie> last_cookie;
};

struct normal_config {
    proto::field<1, proto::dictionary<proto::uint32, proto::int32>> int_config;
};

struct cur_app_state {
    proto::field<1, proto::uint32> is_delay_request;
    proto::field<2, proto::uint32> app_status;
    proto::field<3, proto::uint32> silence_status;
};

struct sso_info_sync_request {
    proto::field<1, proto::uint32> sync_flag;
    proto::field<2, proto::uint32> request_random;
    proto::field<4, proto::uint32> cur_active_status;
    proto::field<5, proto::uint64> group_last_message_time;
    proto::field<6, sso_c2_sync> c2c_info_sync;
    proto::field<8, normal_config> normal_config;
    proto::field<9, register_info> register_info;
    proto::field<11, cur_app_state> app_state;
};

struct sso_info_sync_response {
    proto::field<7, register_response> register_info;
};

}