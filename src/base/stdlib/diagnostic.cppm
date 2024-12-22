//
// Created by Don Yihtseu on 24-12-19.
//
module;

#include <stdexcept>
#include <system_error>

export module standard.diagnostic;

export namespace std {

using std::logic_error;
using std::invalid_argument;
using std::domain_error;
using std::length_error;
using std::out_of_range;
using std::runtime_error;
using std::range_error;
using std::overflow_error;
using std::underflow_error;

using std::error_category;
using std::error_condition;
using std::errc;
using std::error_code;
using std::system_error;
using std::is_error_code_enum;
using std::is_error_condition_enum;
using std::generic_category;
using std::system_category;
using std::make_error_code;
using std::make_error_condition;

}