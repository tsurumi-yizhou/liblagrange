//
// Created by Don Yihtseu on 24-12-19.
//
module;

#include <any>
#include <bit>
#include <bitset>
#include <expected>
#include <functional>
#include <optional>
#include <tuple>
#include <utility>
#include <variant>

export module standard.utility;

export namespace std::placeholders {
using std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_4, std::placeholders::_5, std::placeholders::_6, std::placeholders::_7, std::placeholders::_8, std::placeholders::_9;
}

export namespace std::ranges {

using std::ranges::equal_to;
using std::ranges::not_equal_to;
using std::ranges::greater;
using std::ranges::less;
using std::ranges::greater_equal;
using std::ranges::less_equal;

}

export namespace std {

using std::any;
using std::any_cast;
using std::make_any;
using std::bad_any_cast;

using std::endian;
using std::bit_cast;
using std::byteswap;
using std::has_single_bit;
using std::bit_ceil;
using std::bit_floor;
using std::bit_width;
using std::rotl;
using std::rotr;
using std::countl_zero;
using std::countl_one;
using std::countr_zero;
using std::countr_one;
using std::popcount;

using std::bitset;

using std::expected;
using std::unexpected;
using std::unexpect;
using std::bad_expected_access;
using std::unexpect_t;

using std::function;
using std::mem_fn;
using std::reference_wrapper;
using std::unwrap_reference, std::unwrap_ref_decay;
using std::bad_function_call;
using std::is_bind_expression;
using std::is_placeholder;
using std::plus;
using std::minus;
using std::multiplies;
using std::divides;
using std::modulus;
using std::negate;
using std::equal_to;
using std::not_equal_to;
using std::greater;
using std::less;
using std::greater_equal;
using std::less_equal;
using std::logical_and;
using std::logical_or;
using std::logical_not;
using std::bit_and;
using std::bit_or;
using std::bit_xor;
using std::bit_not;
using std::not_fn;
using std::identity;
using std::default_searcher;
using std::boyer_moore_searcher;
using std::boyer_moore_horspool_searcher;
using std::invoke, std::invoke_r;
using std::bind;
using std::ref, std::cref;

using std::optional;
using std::make_optional;
using std::nullopt_t;
using std::bad_optional_access;
using std::nullopt;

using std::tuple;
using std::tuple_size;
using std::tuple_element;
using std::ignore;
using std::make_tuple;
using std::tie;
using std::forward_as_tuple;
using std::tuple_cat;
using std::get;
using std::apply;
using std::make_from_tuple;

using std::swap;
using std::exchange;
using std::forward;
using std::forward_like;
using std::move;
using std::move_if_noexcept;
using std::as_const;
using std::declval;
using std::to_underlying;
using std::cmp_equal;
using std::cmp_not_equal;
using std::cmp_less;
using std::cmp_greater;
using std::cmp_less_equal;
using std::cmp_greater_equal;
using std::in_range;
using std::unreachable;
using std::make_pair;
using std::pair;
using std::integer_sequence;
using std::monostate;
using std::piecewise_construct, std::piecewise_construct_t;
using std::in_place, std::in_place_t, std::in_place_type, std::in_place_index, std::in_place_index_t;

using std::variant;
using std::bad_variant_access;
using std::variant_size, std::variant_size_v;
using std::variant_alternative, std::variant_alternative_t;
using std::variant_npos;
using std::visit;
using std::holds_alternative;
using std::get_if;

}