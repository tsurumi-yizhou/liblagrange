//
// Created by Don Yihtseu on 24-12-19.
//
module;

#include <atomic>
#include <barrier>
#include <condition_variable>
#include <future>
#include <latch>
#include <mutex>
#include <semaphore>
#include <shared_mutex>
#include <thread>

export module standard.thread;

export namespace std::this_thread {

using std::this_thread::get_id;
using std::this_thread::yield;
using std::this_thread::sleep_for;
using std::this_thread::sleep_until;

}

export namespace std {

using std::atomic;
using std::atomic_flag;
using std::memory_order;
using std::atomic_bool;
using std::atomic_char;
using std::atomic_schar;
using std::atomic_uchar;
using std::atomic_short;
using std::atomic_ushort;
using std::atomic_int;
using std::atomic_uint;
using std::atomic_long;
using std::atomic_ulong;
using std::atomic_llong;
using std::atomic_ullong;
using std::atomic_char8_t;
using std::atomic_char16_t;
using std::atomic_char32_t;
using std::atomic_wchar_t;
using std::atomic_int8_t;
using std::atomic_uint8_t;
using std::atomic_int16_t;
using std::atomic_uint16_t;
using std::atomic_int32_t;
using std::atomic_uint32_t;
using std::atomic_int64_t;
using std::atomic_uint64_t;
using std::atomic_int_least8_t;
using std::atomic_uint_least8_t;
using std::atomic_int_least16_t;
using std::atomic_uint_least16_t;
using std::atomic_int_least32_t;
using std::atomic_uint_least32_t;
using std::atomic_int_least64_t;
using std::atomic_uint_least64_t;
using std::atomic_int_fast8_t;
using std::atomic_uint_fast8_t;
using std::atomic_int_fast16_t;
using std::atomic_uint_fast16_t;
using std::atomic_int_fast32_t;
using std::atomic_uint_fast32_t;
using std::atomic_int_fast64_t;
using std::atomic_uint_fast64_t;
using std::atomic_intptr_t;
using std::atomic_uintptr_t;
using std::atomic_size_t;
using std::atomic_ptrdiff_t;
using std::atomic_intmax_t;
using std::atomic_uintmax_t;
using std::atomic_signed_lock_free;
using std::atomic_unsigned_lock_free;
using std::atomic_is_lock_free;
using std::atomic_store, std::atomic_store_explicit;
using std::atomic_load, std::atomic_load_explicit;
using std::atomic_exchange, std::atomic_exchange_explicit;
using std::atomic_compare_exchange_weak, std::atomic_compare_exchange_weak_explicit;
using std::atomic_compare_exchange_strong, std::atomic_compare_exchange_strong_explicit;
using std::atomic_fetch_add, std::atomic_fetch_add_explicit;
using std::atomic_fetch_sub, std::atomic_fetch_sub_explicit;
using std::atomic_fetch_and, std::atomic_fetch_and_explicit;
using std::atomic_fetch_or, std::atomic_fetch_or_explicit;
using std::atomic_fetch_xor, std::atomic_fetch_xor_explicit;
using std::atomic_wait, std::atomic_wait_explicit;
using std::atomic_notify_one, std::atomic_notify_all;
using std::atomic_flag_test, std::atomic_flag_test_explicit;
using std::atomic_flag_clear, std::atomic_flag_clear_explicit;
using std::atomic_flag_test_and_set, std::atomic_flag_test_and_set_explicit;
using std::atomic_flag_wait, std::atomic_flag_wait_explicit;
using std::atomic_flag_notify_one, std::atomic_flag_notify_all;
using std::kill_dependency;
using std::atomic_thread_fence;
using std::atomic_signal_fence;

using std::barrier;

using std::condition_variable;
using std::condition_variable_any;
using std::cv_status;
using std::notify_all_at_thread_exit;

using std::promise;
using std::packaged_task;
using std::future;
using std::shared_future;
using std::launch;
using std::future_status;
using std::future_error;
using std::future_errc;
using std::async;
using std::future_category;

using std::counting_semaphore;
using std::binary_semaphore;

using std::shared_mutex;
using std::shared_timed_mutex;
using std::shared_lock;

using std::thread;
}