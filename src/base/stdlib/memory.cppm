//
// Created by Don Yihtseu on 24-12-19.
//
module;

#include <memory>
#include <memory_resource>
#include <scoped_allocator>

export module standard.memory;

export namespace std::ranges {

using std::ranges::uninitialized_copy;
using std::ranges::uninitialized_copy_n;
using std::ranges::uninitialized_fill;
using std::ranges::uninitialized_fill_n;
using std::ranges::uninitialized_move;
using std::ranges::uninitialized_move_n;
using std::ranges::uninitialized_default_construct;
using std::ranges::uninitialized_default_construct_n;
using std::ranges::uninitialized_value_construct;
using std::ranges::uninitialized_value_construct_n;
using std::ranges::destroy;
using std::ranges::destroy_at;
using std::ranges::destroy_n;
using std::ranges::construct_at;

}

export namespace std {

using std::pointer_traits;
using std::allocator;
using std::allocator_traits;
using std::uses_allocator;

using std::unique_ptr;
using std::shared_ptr;
using std::weak_ptr;

using std::owner_less;
using std::enable_shared_from_this;
using std::bad_weak_ptr;
using std::default_delete;
using std::allocator_arg, std::allocator_arg_t;
using std::uses_allocator_construction_args;
using std::make_obj_using_allocator;
using std::uninitialized_construct_using_allocator;
using std::to_address;
using std::addressof;
using std::align;
using std::assume_aligned;
using std::uninitialized_copy;
using std::uninitialized_copy_n;
using std::uninitialized_fill;
using std::uninitialized_fill_n;
using std::uninitialized_move;
using std::uninitialized_move_n;
using std::uninitialized_default_construct;
using std::uninitialized_default_construct_n;
using std::uninitialized_value_construct;
using std::uninitialized_value_construct_n;
using std::destroy;
using std::destroy_at;
using std::destroy_n;
using std::construct_at;

using std::make_unique, std::make_unique_for_overwrite;
using std::make_shared, std::make_shared_for_overwrite;
using std::allocate_shared, std::allocate_shared_for_overwrite;
using std::static_pointer_cast, std::dynamic_pointer_cast, std::const_pointer_cast, std::reinterpret_pointer_cast;
using std::get_deleter;

using std::pmr::polymorphic_allocator;
using std::pmr::memory_resource;
using std::pmr::pool_options;
using std::pmr::synchronized_pool_resource;
using std::pmr::unsynchronized_pool_resource;
using std::pmr::monotonic_buffer_resource;
using std::pmr::new_delete_resource;
using std::pmr::null_memory_resource;
using std::pmr::get_default_resource;
using std::pmr::set_default_resource;

using std::scoped_allocator_adaptor;

}