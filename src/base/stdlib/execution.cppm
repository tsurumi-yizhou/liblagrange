//
// Created by Don Yihtseu on 24-12-19.
//
module;

#include <stdexec/execution.hpp>

export module standard.execution;

export using stdexec::__closure::operator|;

export namespace std::execution {

using stdexec::get_forward_progress_guarantee_t, stdexec::forward_progress_guarantee;
using stdexec::get_domain_t, stdexec::get_domain;
using stdexec::get_scheduler_t, stdexec::get_scheduler;
using stdexec::get_delegatee_scheduler_t, stdexec::get_delegatee_scheduler;
using stdexec::get_completion_scheduler_t, stdexec::get_completion_scheduler;

using stdexec::empty_env;
using stdexec::get_env_t, stdexec::get_env;
using stdexec::env_of_t;
using stdexec::default_domain;
using stdexec::scheduler;
using stdexec::receiver_t, stdexec::receiver;
using stdexec::receiver_of;
using stdexec::set_value_t, stdexec::set_value;
using stdexec::set_error_t, stdexec::set_error;
using stdexec::set_stopped_t, stdexec::set_stopped;
using stdexec::operation_state;
using stdexec::start_t, stdexec::start;
using stdexec::sender_t, stdexec::sender;
using stdexec::sender_in, stdexec::sender_to;
using stdexec::get_completion_signatures_t, stdexec::get_completion_signatures;
using stdexec::completion_signatures_of_t;
using stdexec::value_types_of_t;
using stdexec::error_types_of_t;
using stdexec::sends_stopped;
using stdexec::tag_of_t;
using stdexec::transform_sender_t, stdexec::transform_sender, stdexec::transform_sender_result_t;
using stdexec::transform_env;
using stdexec::apply_sender_t, stdexec::apply_sender, stdexec::apply_sender_result_t;
using stdexec::connect_t, stdexec::connect;
using stdexec::connect_result_t;
using stdexec::just_t, stdexec::just;
using stdexec::just_error_t, stdexec::just_error;
using stdexec::just_stopped_t, stdexec::just_stopped;
using stdexec::schedule_result_t;
using stdexec::sender_adaptor_closure;

using stdexec::start_on_t;
using stdexec::continue_on_t;
using stdexec::on_t;
using stdexec::schedule_from_t;
using stdexec::then_t;
using stdexec::upon_error_t;
using stdexec::upon_stopped_t;
using stdexec::let_value_t;
using stdexec::let_error_t;
using stdexec::let_stopped_t;
using stdexec::bulk_t;
using stdexec::split_t;
using stdexec::when_all_t;
using stdexec::when_all_with_variant_t;
using stdexec::into_variant_t;
using stdexec::stopped_as_optional_t;
using stdexec::stopped_as_error_t;
using stdexec::start_on;
using stdexec::continue_on;
using stdexec::on;
using stdexec::schedule_from;
using stdexec::then;
using stdexec::upon_error;
using stdexec::upon_stopped;
using stdexec::let_value;
using stdexec::let_error;
using stdexec::let_stopped;
using stdexec::bulk;
using stdexec::split;
using stdexec::when_all;
using stdexec::when_all_with_variant;
using stdexec::into_variant;
using stdexec::stopped_as_optional;
using stdexec::stopped_as_error;
using stdexec::run_loop;
using stdexec::as_awaitable_t, stdexec::as_awaitable;
using stdexec::with_awaitable_senders;

using stdexec::sync_wait_t, stdexec::sync_wait;

} // namespace std::execution

