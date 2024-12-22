//
// Created by Don Yihtseu on 24-12-19.
//
module;

#include <ranges>

export module standard.ranges;

export using std::ranges::operator|;

export namespace std::ranges {

using std::ranges::range;
using std::ranges::borrowed_range;
using std::ranges::sized_range;
using std::ranges::view;
using std::ranges::input_range;
using std::ranges::output_range;
using std::ranges::forward_range;
using std::ranges::bidirectional_range;
using std::ranges::random_access_range;
using std::ranges::contiguous_range;
using std::ranges::common_range;
using std::ranges::viewable_range;
using std::ranges::to;
using std::ranges::iterator_t;
using std::ranges::sentinel_t;
using std::ranges::range_difference_t;
using std::ranges::range_size_t;
using std::ranges::range_value_t;
using std::ranges::range_reference_t;
using std::ranges::range_rvalue_reference_t;
using std::ranges::view_interface;
using std::ranges::subrange;
using std::ranges::dangling;
using std::ranges::borrowed_iterator_t, std::ranges::borrowed_subrange_t;
using std::ranges::empty_view;
using std::ranges::single_view;
using std::ranges::iota_view;
using std::ranges::repeat_view;
using std::ranges::basic_istream_view;
using std::ranges::ref_view;
using std::ranges::owning_view;
using std::ranges::as_rvalue_view;
using std::ranges::filter_view;
using std::ranges::transform_view;
using std::ranges::take_view;
using std::ranges::take_while_view;
using std::ranges::drop_view;
using std::ranges::drop_while_view;
using std::ranges::join_view;
using std::ranges::split_view;
using std::ranges::lazy_split_view;
using std::ranges::common_view;
using std::ranges::reverse_view;
using std::ranges::elements_view;
using std::ranges::keys_view;
using std::ranges::values_view;
using std::ranges::zip_view;
using std::ranges::chunk_by_view;
using std::ranges::begin;
using std::ranges::end;
using std::ranges::cbegin;
using std::ranges::cend;
using std::ranges::rbegin;
using std::ranges::rend;
using std::ranges::crbegin;
using std::ranges::crend;
using std::ranges::size;
using std::ranges::ssize;
using std::ranges::empty;
using std::ranges::data;
using std::ranges::cdata;
using std::ranges::subrange_kind;

namespace views {

using std::ranges::views::empty;
using std::views::single;
using std::views::iota;
using std::views::repeat;
using std::views::istream;
using std::views::all, std::views::all_t;
using std::views::as_rvalue;
using std::views::filter;
using std::views::transform;
using std::views::take;
using std::views::take_while;
using std::views::drop;
using std::views::drop_while;
using std::views::join;
// using std::views::join_with;
using std::views::split;
using std::views::lazy_split;
// using std::views::concat;
using std::views::counted;
using std::views::common;
using std::views::reverse;
using std::views::elements;
using std::views::keys;
using std::views::values;
using std::views::zip;
using std::views::chunk_by;

}

}

export namespace std {
using std::from_range, std::from_range_t;
}