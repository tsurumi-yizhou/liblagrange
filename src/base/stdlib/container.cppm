//
// Created by Don Yihtseu on 24-12-19.
//
module;

#include <array>
#include <deque>
#include <forward_list>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <span>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <vector>

export module standard.container;

export namespace std {

using std::array;
using std::to_array;
using std::vector;
using std::deque;
using std::forward_list;
using std::list;

using std::set;
using std::map;
using std::multiset;
using std::multimap;

using std::unordered_set;
using std::unordered_map;
using std::unordered_multiset;
using std::unordered_multimap;

using std::stack;
using std::uses_allocator;
using std::queue;
using std::priority_queue;
using std::span;
using std::as_bytes;
using std::as_writable_bytes;
using std::dynamic_extent;
using std::swap;
using std::erase;
using std::erase_if;

}