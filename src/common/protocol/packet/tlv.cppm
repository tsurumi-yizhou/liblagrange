//
// Created by Don Yihtseu on 24-12-20.
//

export module tlv;

import standard;
import binary;
import protobuf;

export namespace tlv {

template<int Num>
struct body;

template<>
struct body<0x100> {
    binary::field<binary::uint16> db_buf_version;
    binary::field<binary::uint32> sso_version;
    binary::field<binary::uint32> app_id;
    binary::field<binary::uint32> sub_app_id;
    binary::field<binary::uint32> app_client_version;
    binary::field<binary::uint32> main_sig_map;
};

template<>
struct body<0x103> {};

template<>
struct body<0x106> {
    binary::field<binary::bytes> temp;
};

template<>
struct body<0x107> {
    binary::field<binary::uint16> picture_type;
    binary::field<binary::uint8> capture_type;
    binary::field<binary::uint16> picture_size;
    binary::field<binary::uint8> return_type;
};

template<>
struct body<0x108> {};

template<>
struct body<0x10A> {
    binary::field<binary::bytes> tgt;
};

template<>
struct body<0x10C> {};

template<>
struct body<0x10D> {};

template<>
struct body<0x10E> {};

template<>
struct body<0x11> {};

template<>
struct body<0x114> {};

template<>
struct body<0x116> {
    binary::field<binary::uint8> version;
    binary::field<binary::uint32> misc_bitmap;
    binary::field<binary::uint32> sub_sig_map;
    binary::field<binary::uint8> app_id_count;
    binary::field<binary::bytes> app_id_bytes;
};

template<>
struct body<0x118> {};

template<>
struct body<0x119> {
    binary::field<binary::bytes> encrypted_tlv;
};

template<>
struct body<0x11A> {
    binary::field<binary::uint16> face_id;
    binary::field<binary::uint8> age;
    binary::field<binary::uint8> gender;
    binary::field<binary::string> nickname;
};

template<>
struct body<0x11F> {};

template<>
struct body<0x012> {};

template<>
struct body<0x124> {
    binary::field<binary::bytes> field;
};

template<>
struct body<0x128> {
    binary::field<binary::uint16> const_0;
    binary::field<binary::uint8> new_guid;
    binary::field<binary::uint8> available_guid;
    binary::field<binary::uint8> changed_guid;
    binary::field<binary::uint8> guid_flag;
    binary::field<binary::string> os;
    binary::field<binary::string> guid;
    binary::field<binary::uint16> const_1;
};

template<>
struct body<0x130> {};

template<>
struct body<0x133> {};

template<>
struct body<0x134> {};

template<>
struct body<0x138> {};

template<>
struct body<0x141> {
    binary::field<binary::uint16> version;
    binary::field<binary::string> unknown;
    binary::field<binary::uint16> network_type;
    binary::field<binary::string> access_point;
};

template<>
struct body<0x142> {
    binary::field<binary::uint16> version;
    binary::field<binary::string> package_name;
};

template<>
struct body<0x143> {
    binary::field<binary::bytes> d2;
};

template<>
struct body<0x145> {
    binary::field<binary::bytes> guid;
};

template<>
struct body<0x146> {
    binary::field<binary::uint32> state;
    binary::field<binary::string> tag;
    binary::field<binary::string> message;
    binary::field<binary::uint32> field_0;
};

template<>
struct body<0x147> {
    binary::field<binary::uint32> app_id;
    binary::field<binary::string> pt_version;
    binary::field<binary::string> package_name;
};

template<>
struct body<0x161> {};

template<>
struct body<0x163> {};

template<>
struct body<0x166> {
    binary::field<binary::uint8> image_type;
};

template<>
struct body<0x167> {};

template<>
struct body<0x16A> {
    binary::field<binary::bytes> picture_signature;
};

template<>
struct body<0x16D> {};

template<>
struct body<0x16E> {
    binary::field<binary::bytes> device_name;
};

template<>
struct body<0x144> {
    binary::field<binary::uint16> tlv_count;
    binary::field<body<0x16E>> tlv_0x16E;
    binary::field<body<0x147>> tlv_0x147;
    binary::field<body<0x128>> tlv_0x128;
    binary::field<body<0x124>> tlv_0x124;
};

template<>
struct body<0x177> {
    binary::field<binary::uint8> field_1;
    binary::field<binary::uint32> build_time;
    binary::field<binary::string> wt_login_sdk;
};

template<>
struct body<0x18> {
    binary::field<binary::uint16> ping_version;
    binary::field<binary::uint32> sso_version;
    binary::field<binary::uint32> app_id;
    binary::field<binary::uint32> app_client_version;
    binary::field<binary::uint32> uin;
    binary::field<binary::uint16> field_0;
    binary::field<binary::uint16> field_1;
};

template<>
struct body<0x191> {
    binary::field<binary::uint8> k;
};

template<>
struct body<0x305> {
    binary::field<binary::bytes> d2_key;
};

template<>
struct body<0x318> {};

template<>
struct body<0x508> {};

template<>
struct body<0x510> {};

template<>
struct body<0x521> {
    binary::field<binary::uint32> product_type;
    binary::field<binary::string> product_description;
};

template<>
struct body<0x523> {};

template<>
struct body<0x528> {};

template<>
struct body<0x543> {
    struct layer1 {
        struct layer2 {
            proto::field<1, proto::string> uid;
        };
        proto::field<11, layer2> layer2;
    };
    proto::field<9, layer1> layer1;
};

template<>
struct body<0x550> {};

template<int Num>
struct qrcode;

template<>
struct qrcode<0x11> {
    binary::field<binary::bytes> unusual_sign;
};

template<>
struct qrcode<0x12> {};

template<>
struct qrcode<0x15> {};

template<>
struct qrcode<0x16> {
    binary::field<binary::uint32> field_0;
    binary::field<binary::uint32> sub_app_id;
    binary::field<binary::uint32> app_id_qrcode;
    binary::field<binary::bytes> guid;
    binary::field<binary::string> package_name;
    binary::field<binary::string> pt_version;
    binary::field<binary::string> package_name_2;
};

template<>
struct qrcode<0x17> {
    binary::field<binary::bytes> qrcode;
};

template<>
struct qrcode<0x18> {
    binary::field<binary::bytes> temp_password;
};

template<>
struct qrcode<0x19> {
    binary::field<binary::bytes> picture_signature;
};

template<>
struct qrcode<0x1B> {
    binary::field<binary::uint32> micro;
    binary::field<binary::uint32> version;
    binary::field<binary::uint32> size;
    binary::field<binary::uint32> margin;
    binary::field<binary::uint32> dots_per_inch;
    binary::field<binary::uint32> electric_level;
    binary::field<binary::uint32> hint;
    binary::field<binary::uint16> field_0;
};

template<>
struct qrcode<0x1C> {
    binary::field<binary::uint32> expire_seconds;
    binary::field<binary::uint16> expire_minutes;
};

template<>
struct qrcode<0x1D> {
    binary::field<binary::uint8> field_type;
    binary::field<binary::uint32> misc_bitmap;
    binary::field<binary::uint32> field_0;
    binary::field<binary::uint8> field_byte_0;
};

template<>
struct qrcode<0x1E> {
    binary::field<binary::bytes> tgtgt_key;
};

template<>
struct qrcode<0x2> {};

template<>
struct qrcode<0x33> {
    binary::field<binary::bytes> guid;
};

template<>
struct qrcode<0x35> {
    binary::field<binary::int32> pt_os_version;
};

template<>
struct qrcode<0x4> {
    binary::field<binary::uint16> type;
    binary::field<binary::string> uin;
};

template<>
struct qrcode<0x65> {};

template<>
struct qrcode<0x66> {
    binary::field<binary::int32> pt_os_version;
};

template<>
struct qrcode<0x7> {

};

template<>
struct qrcode<0xCE> {

};

}