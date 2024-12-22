//
// Created by Don Yihtseu on 24-12-19.
//
module;

#include <ratio>
#include <type_traits>

export module standard.meta;

export namespace std {

using std::ratio;
using std::ratio_add;
using std::ratio_subtract;
using std::ratio_multiply;
using std::ratio_divide;
using std::ratio_equal;
using std::ratio_not_equal;
using std::ratio_less;
using std::ratio_less_equal;
using std::ratio_greater;
using std::ratio_greater_equal;

using std::integral_constant;
using std::bool_constant;
using std::true_type, std::false_type;
using std::is_void;
using std::is_null_pointer;
using std::is_integral;
using std::is_floating_point;
using std::is_array;
using std::is_enum;
using std::is_union;
using std::is_class;
using std::is_function;
using std::is_pointer;
using std::is_lvalue_reference;
using std::is_rvalue_reference;
using std::is_member_object_pointer;
using std::is_member_function_pointer;
using std::is_fundamental;
using std::is_arithmetic;
using std::is_scalar;
using std::is_object;
using std::is_compound;
using std::is_reference;
using std::is_member_pointer;
using std::is_const;
using std::is_volatile;
using std::is_trivially_copyable;
using std::is_standard_layout;
using std::has_unique_object_representations;
using std::is_empty;
using std::is_polymorphic;
using std::is_abstract;
using std::is_final;
using std::is_aggregate;
using std::is_signed;
using std::is_unsigned;
using std::is_bounded_array;
using std::is_unbounded_array;
using std::is_scoped_enum;
using std::is_constructible, std::is_trivially_copyable, std::is_nothrow_constructible;
using std::is_default_constructible, std::is_trivially_default_constructible, std::is_nothrow_default_constructible;
using std::is_copy_constructible, std::is_trivially_copy_constructible, std::is_nothrow_copy_constructible;
using std::is_move_constructible, std::is_trivially_move_constructible, std::is_nothrow_move_constructible;
using std::is_assignable, std::is_trivially_copy_assignable, std::is_nothrow_copy_assignable;
using std::is_move_assignable, std::is_trivially_move_assignable, std::is_nothrow_move_assignable;
using std::is_copy_assignable, std::is_trivially_copy_assignable, std::is_nothrow_copy_assignable;
using std::is_destructible, std::is_trivially_destructible, std::is_nothrow_destructible;
using std::has_virtual_destructor;
using std::is_swappable_with, std::is_swappable, std::is_nothrow_swappable_with, std::is_nothrow_swappable;
using std::alignment_of, std::rank, std::extent;
using std::is_same;
using std::is_base_of;
using std::is_convertible, std::is_nothrow_convertible;
using std::is_invocable, std::is_invocable_r, std::is_nothrow_invocable, std::is_nothrow_invocable_r;
using std::remove_cv, std::remove_const, std::remove_volatile;
using std::add_cv, std::add_const, std::add_volatile;
using std::remove_reference;
using std::add_lvalue_reference, std::add_rvalue_reference;
using std::make_signed;
using std::make_unsigned;
using std::remove_extent;
using std::remove_all_extents;
using std::remove_pointer;
using std::add_pointer;
using std::decay;
using std::remove_cvref;
using std::enable_if;
using std::conditional;
using std::common_type;
using std::common_reference, std::basic_common_reference;
using std::underlying_type;
using std::invoke_result;
using std::void_t;
using std::type_identity;
using std::conjunction;
using std::disjunction;
using std::negation;

using std::is_constant_evaluated;

}