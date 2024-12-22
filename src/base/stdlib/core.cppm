//
// Created by Don Yihtseu on 24-12-19.
//
module;

#include <cstdlib>
#include <compare>
#include <coroutine>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <exception>
#include <initializer_list>
#include <limits>
#include <new>
#include <source_location>
#include <typeindex>
#include <typeinfo>

export module standard.core;

export namespace std {

using std::div_t;
using std::ldiv_t;
using std::lldiv_t;

using std::abort;
using std::exit;
using std::quick_exit;
using std::atexit;
using std::at_quick_exit;
using std::system;
using std::getenv;
using std::malloc;
using std::calloc;
using std::realloc;
using std::free;
using std::atof;
using std::atoi;
using std::atol;
using std::atoll;
using std::strtof;
using std::strtod;
using std::strtol;
using std::strtoll;
using std::strtoul;
using std::strtoull;
using std::mblen;
using std::mbtowc;
using std::wctomb;
using std::mbstowcs;
using std::wcstombs;
using std::rand;
using std::srand;
using std::qsort;
using std::bsearch;
using std::abs;
using std::labs;
using std::llabs;
using std::div;
using std::ldiv;
using std::lldiv;

using std::three_way_comparable, std::three_way_comparable_with;
using std::partial_ordering;
using std::weak_ordering;
using std::strong_ordering;
using std::is_eq, std::is_neq, std::is_lt, std::is_lteq, std::is_gt, std::is_gteq;
using std::compare_three_way;
using std::compare_three_way_result;
using std::common_comparison_category;
using std::strong_order;
using std::weak_order;
using std::partial_order;
using std::compare_strong_order_fallback;
using std::compare_weak_order_fallback;
using std::compare_partial_order_fallback;

using std::coroutine_traits;
using std::coroutine_handle;
using std::noop_coroutine;
using std::noop_coroutine_promise;
using std::noop_coroutine_handle;
using std::suspend_never;
using std::suspend_always;

using std::longjmp;
using std::jmp_buf;

using std::signal;
using std::raise;
using std::sig_atomic_t;

using std::va_list;

using std::size_t;
using std::ptrdiff_t;
using std::nullptr_t;
using std::max_align_t;
using std::byte;
using std::to_integer;

using std::int8_t, std::int16_t, std::int32_t, std::int64_t;
using std::int_least8_t, std::int_least16_t, std::int_least32_t, std::int_least64_t;
using std::int_fast8_t, std::int_fast16_t, std::int_fast32_t, std::int_fast64_t;
using std::intmax_t;
using std::intptr_t;
using std::uint8_t, std::uint16_t, std::uint32_t, std::uint64_t;
using std::uint_least8_t, std::uint_least16_t, std::uint_least32_t, std::uint_least64_t;
using std::uint_fast8_t, std::uint_fast16_t, std::uint_fast32_t, std::uint_fast64_t;
using std::uintmax_t;
using std::uintptr_t;

using std::exception;
using std::nested_exception;
using std::bad_exception;
using std::terminate_handler;
using std::exception_ptr;

using std::uncaught_exceptions;
using std::make_exception_ptr;
using std::current_exception;
using std::rethrow_exception;
using std::throw_with_nested;
using std::rethrow_if_nested;
using std::terminate;
using std::get_terminate;
using std::set_terminate;

using std::initializer_list;
using std::begin, std::end;

using std::numeric_limits;
using std::float_round_style;
using std::float_denorm_style;

using std::bad_alloc;
using std::bad_array_new_length;
using std::align_val_t;
using std::new_handler;
using std::nothrow;
using std::destroying_delete, std::destroying_delete_t;
using std::get_new_handler, std::set_new_handler;
using std::launder;

using std::source_location;

using std::type_info;
using std::bad_typeid;
using std::bad_cast;
using std::type_index;
using std::hash;
}