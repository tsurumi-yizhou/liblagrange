//
// Created by Don Yihtseu on 24-12-20.
//
module;

#include <boost/asio.hpp>

export module standard.networking;

import standard.diagnostic;

export namespace std::net::ip::unicast {
using boost::asio::ip::unicast::hops;
}

export namespace std::net::ip::multicast {
using boost::asio::ip::multicast::join_group;
using boost::asio::ip::multicast::leave_group;
using boost::asio::ip::multicast::outbound_interface;
using boost::asio::ip::multicast::hops;
using boost::asio::ip::multicast::enable_loopback;
}

export namespace std::net::ip {

enum class resolver_errc {
    host_not_found = boost::asio::error::host_not_found,
    try_again = boost::asio::error::host_not_found_try_again,
    service_not_found = boost::asio::error::service_not_found,
};
using boost::asio::ip::address_v4;
using boost::asio::ip::make_address_v4;
using boost::asio::ip::address_v6;
using boost::asio::ip::make_address_v6;
using boost::asio::ip::address;
using boost::asio::ip::bad_address_cast;
using boost::asio::ip::make_address;
using boost::asio::ip::basic_address_iterator;
using boost::asio::ip::basic_address_range;
using boost::asio::ip::network_v4;
using boost::asio::ip::make_network_v4;
using boost::asio::ip::network_v6;
using boost::asio::ip::make_network_v6;
using boost::asio::ip::basic_endpoint;
using boost::asio::ip::basic_resolver_entry;
using boost::asio::ip::basic_resolver_results;
using boost::asio::ip::resolver_base;
using boost::asio::ip::basic_resolver;
using boost::asio::ip::host_name;
using boost::asio::ip::tcp;
using boost::asio::ip::udp;
using boost::asio::ip::v6_only;
}

export namespace std::net {

using boost::asio::async_result;
using boost::asio::async_completion;
using boost::asio::associated_allocator;
using boost::asio::get_associated_allocator;
using boost::asio::execution_context;
using boost::asio::use_service;
using boost::asio::make_service;
using boost::asio::has_service;
using boost::asio::service_already_exists;
using boost::asio::is_executor;
using boost::asio::executor_arg_t;
using boost::asio::uses_executor;
using boost::asio::associated_executor;
using boost::asio::get_associated_executor;
using boost::asio::executor_binder;
using boost::asio::bind_executor;
using boost::asio::executor_work_guard;
using boost::asio::system_executor;
using boost::asio::system_context;
using boost::asio::executor;
using boost::asio::bad_executor;
using boost::asio::dispatch;
using boost::asio::post;
using boost::asio::defer;
using boost::asio::strand;
using boost::asio::use_future_t;
using boost::asio::io_context;
enum class stream_errc {
    eof = boost::asio::error::eof,
    not_found = boost::asio::error::not_found,
};
using boost::asio::mutable_buffer;
using boost::asio::const_buffer;
using boost::asio::buffer;
using boost::asio::is_mutable_buffer_sequence;
using boost::asio::is_const_buffer_sequence;
using boost::asio::is_dynamic_buffer;
using boost::asio::buffer_sequence_begin;
using boost::asio::buffer_sequence_end;
using boost::asio::buffer_size;
using boost::asio::buffer_copy;
using boost::asio::dynamic_vector_buffer;
using boost::asio::dynamic_string_buffer;;
using boost::asio::dynamic_buffer;
using boost::asio::transfer_all;
using boost::asio::transfer_at_least;
using boost::asio::transfer_exactly;
using boost::asio::read;
using boost::asio::read_until;
using boost::asio::async_read;
using boost::asio::async_read_until;
using boost::asio::write;
using boost::asio::async_write;
enum class socket_errc {
    already_open = boost::asio::error::already_open,
    not_found = boost::asio::error::not_found,
};
using boost::asio::socket_base;
using boost::asio::basic_socket;
using boost::asio::basic_datagram_socket;
using boost::asio::basic_stream_socket;
using boost::asio::basic_socket_acceptor;
using boost::asio::basic_socket_streambuf;
using boost::asio::basic_socket_iostream;
using boost::asio::connect;
using boost::asio::async_connect;
}