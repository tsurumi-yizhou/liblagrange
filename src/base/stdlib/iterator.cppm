//
// Created by Don Yihtseu on 24-12-19.
//
module;

#include <iterator>

export module standard.iterator;

export namespace std::ranges {
using std::ranges::iter_move, std::ranges::iter_swap;
using std::ranges::advance;
using std::ranges::distance;
using std::ranges::next;
using std::ranges::prev;
}

export namespace std {

using std::indirectly_readable;
using std::indirectly_writable;
using std::weakly_incrementable;
using std::incrementable;
using std::input_or_output_iterator;
using std::sentinel_for;
using std::sized_sentinel_for;
using std::input_iterator;
using std::output_iterator;
using std::forward_iterator;
using std::bidirectional_iterator;
using std::random_access_iterator;
using std::contiguous_iterator;
using std::indirectly_unary_invocable, std::indirectly_regular_unary_invocable;
using std::indirect_unary_predicate;
using std::indirect_binary_predicate;
using std::indirect_equivalence_relation;
using std::indirect_strict_weak_order;

using std::indirectly_movable;
using std::indirectly_movable_storable;
using std::indirectly_copyable;
using std::indirectly_copyable_storable;
using std::indirectly_swappable;
using std::indirectly_comparable;
using std::mergeable;
using std::sortable;
using std::indirect_result_t;
using std::projected;
using std::incrementable_traits;
using std::indirectly_readable_traits;
using std::iter_value_t, std::iter_reference_t, std::iter_difference_t, std::iter_rvalue_reference_t, std::iter_common_reference_t;
using std::iterator_traits;
using std::input_iterator_tag, std::output_iterator_tag, std::forward_iterator_tag, std::bidirectional_iterator_tag, std::random_access_iterator_tag, std::contiguous_iterator_tag;
using std::reverse_iterator;
using std::move_iterator;
using std::move_sentinel;
using std::common_iterator;
using std::default_sentinel_t;
using std::counted_iterator;
using std::unreachable_sentinel_t;
using std::back_insert_iterator;
using std::front_insert_iterator;
using std::insert_iterator;
using std::istream_iterator;
using std::ostream_iterator;
using std::istreambuf_iterator;
using std::ostreambuf_iterator;
using std::unreachable_sentinel;
using std::default_sentinel;
using std::make_reverse_iterator;
using std::make_move_iterator;
using std::front_inserter;
using std::back_inserter;
using std::inserter;
using std::advance;
using std::distance;
using std::next;
using std::prev;
using std::begin, std::cbegin;
using std::end, std::cend;
using std::rbegin, std::crbegin;
using std::rend, std::crend;
using std::size, std::ssize;
using std::empty;
using std::data;
}