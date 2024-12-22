//
// Created by Don Yihtseu on 24-12-19.
//
module;

#include <algorithm>
#include <numeric>

export module standard.algorithm;

export namespace std::ranges {

using std::ranges::in_fun_result;
using std::ranges::in_in_result;
using std::ranges::in_out_result;
using std::ranges::in_in_out_result;
using std::ranges::in_in_out_result;
using std::ranges::min_max_result;
using std::ranges::in_found_result;
// using std::ranges::in_value_result;
// using std::ranges::out_value_result;
using std::ranges::all_of, std::ranges::any_of, std::ranges::none_of;
using std::ranges::for_each, std::ranges::for_each_n;
using std::ranges::count, std::ranges::count_if;
using std::ranges::mismatch;
using std::ranges::find, std::ranges::find_if, std::ranges::find_if_not;
using std::ranges::find_last, std::ranges::find_last_if, std::ranges::find_last_if_not;
using std::ranges::find_end, std::ranges::find_first_of;
using std::ranges::adjacent_find;
using std::ranges::search, std::ranges::search_n;
using std::ranges::contains, std::ranges::contains_subrange;
using std::ranges::fold_left, std::ranges::fold_left_with_iter, std::ranges::fold_left_with_iter_result;
using std::ranges::copy, std::ranges::copy_n, std::ranges::copy_if, std::ranges::copy_backward;
using std::ranges::move, std::ranges::move_backward;
using std::ranges::fill, std::ranges::fill_n;
using std::ranges::transform;
using std::ranges::generate, std::ranges::generate_n;
using std::ranges::remove, std::ranges::remove_if;
using std::ranges::remove_copy, std::ranges::remove_copy_if;
using std::ranges::replace, std::ranges::replace_if;
using std::ranges::replace_copy, std::ranges::replace_copy_if;
using std::ranges::swap_ranges;
using std::ranges::reverse, std::ranges::reverse_copy;
using std::ranges::rotate, std::ranges::rotate_copy;
// using std::ranges::shift_left, std::ranges::shift_right;
using std::ranges::shuffle, std::ranges::sample;
using std::ranges::unique, std::ranges::unique_copy;
using std::ranges::is_partitioned;
using std::ranges::partition, std::ranges::partition_copy, std::ranges::partition_point;
using std::ranges::stable_partition;
using std::ranges::is_sorted;
using std::ranges::is_sorted_until;
using std::ranges::sort, std::ranges::partial_sort, std::ranges::partial_sort_copy;
using std::ranges::stable_sort;
using std::ranges::nth_element;
using std::ranges::lower_bound, std::ranges::upper_bound;
using std::ranges::binary_search;
using std::ranges::equal_range;
using std::ranges::merge, std::ranges::inplace_merge;
using std::ranges::includes;
using std::ranges::set_union;
using std::ranges::set_intersection;
using std::ranges::set_difference;
using std::ranges::set_symmetric_difference;
using std::ranges::is_heap;
using std::ranges::is_heap_until;
using std::ranges::make_heap;
using std::ranges::push_heap;
using std::ranges::pop_heap;
using std::ranges::sort_heap;
using std::ranges::min, std::ranges::max;
using std::ranges::min_element, std::ranges::max_element;
using std::ranges::minmax, std::ranges::minmax_element;
using std::ranges::clamp;
using std::ranges::lexicographical_compare;
using std::ranges::is_permutation;
using std::ranges::next_permutation, std::ranges::prev_permutation;

// using std::ranges::iota;
}

export namespace std {

using std::all_of, std::any_of, std::none_of;
using std::for_each, std::for_each_n;
using std::count, std::count_if;
using std::mismatch;
using std::find, std::find_if, std::find_if_not;
using std::find_end, std::find_first_of;
using std::adjacent_find;
using std::search, std::search_n;
using std::copy, std::copy_n, std::copy_if, std::copy_backward;
using std::move, std::move_backward;
using std::fill, std::fill_n;
using std::transform;
using std::generate, std::generate_n;
using std::remove, std::remove_if;
using std::remove_copy, std::remove_copy_if;
using std::replace, std::replace_if;
using std::replace_copy, std::replace_copy_if;
using std::swap_ranges;
using std::iter_swap;
using std::reverse, std::reverse_copy;
using std::rotate, std::rotate_copy;
using std::shift_left, std::shift_right;
using std::shuffle, std::sample;
using std::unique, std::unique_copy;
using std::is_partitioned;
using std::partition, std::partition_copy, std::partition_point;
using std::stable_partition;
using std::is_sorted;
using std::is_sorted_until;
using std::sort, std::partial_sort, std::partial_sort_copy;
using std::stable_sort;
using std::nth_element;
using std::lower_bound, std::upper_bound;
using std::binary_search;
using std::equal_range;
using std::merge, std::inplace_merge;
using std::includes;
using std::set_union, std::set_intersection, std::set_difference, std::set_symmetric_difference;
using std::is_heap;
using std::is_heap_until;
using std::make_heap;
using std::push_heap;
using std::pop_heap;
using std::sort_heap;
using std::min, std::max;
using std::min_element, std::max_element;
using std::minmax, std::minmax_element;
using std::clamp;
using std::lexicographical_compare;
using std::lexicographical_compare_three_way;
using std::is_permutation;
using std::next_permutation, std::prev_permutation;

using std::iota;
using std::accumulate;
using std::reduce;
using std::transform_reduce;
using std::inner_product;
using std::adjacent_difference;
using std::partial_sum;
using std::exclusive_scan;
using std::inclusive_scan;
using std::transform_exclusive_scan;
using std::transform_inclusive_scan;
using std::gcd, std::lcm;
using std::midpoint;
// using std::add_sat, std::sub_sat, std::mul_sat;

}