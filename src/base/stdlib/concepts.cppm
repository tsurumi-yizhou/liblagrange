//
// Created by Don Yihtseu on 24-12-19.
//
module;

#include <concepts>

export module standard.concepts;

export namespace std::ranges {
using std::ranges::swap;
}

export namespace std {

using std::same_as;
using std::derived_from;
using std::convertible_to;
using std::common_reference_with;
using std::common_with;
using std::integral;
using std::signed_integral;
using std::unsigned_integral;
using std::floating_point;
using std::assignable_from;
using std::swappable, std::swappable_with;
using std::destructible;
using std::constructible_from;
using std::default_initializable;
using std::move_constructible;
using std::copy_constructible;

using std::equality_comparable, std::equality_comparable_with;
using std::totally_ordered, std::totally_ordered_with;

using std::movable;
using std::copyable;
using std::semiregular;
using std::regular;

using std::invocable, std::regular_invocable;
using std::predicate;
using std::relation;
using std::equivalence_relation;
using std::strict_weak_order;

}