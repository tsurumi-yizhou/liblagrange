//
// Created by Don Yihtseu on 24-12-21.
//

export module wtlogin;

import standard;
import binary;

export namespace wtlogin {

template<typename Head>
struct packet {
    binary::field<binary::uint16> version;
    binary::field<binary::uint16> command;
    binary::field<binary::uint32> sequence;
    binary::field<binary::uint32> timestamp;
    binary::field<binary::uint8> extension_version;
    binary::field<binary::uint8> command_version;
    binary::field<binary::uint32> flag;
    binary::field<binary::uint8> publish_id;
    binary::field<binary::uint16> instant_id;
    binary::field<binary::uint16> client_type;
    binary::field<binary::uint32> retries;
    binary::field<Head> encrypted_head;
    binary::bytes encrypted_data;
    binary::field<binary::uint8> end;
};

}