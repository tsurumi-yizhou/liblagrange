//
// Created by Don Yihtseu on 24-12-21.
//
module;

#include <asio/awaitable.hpp>

export module asynchrony;

import standard;

namespace async {

using asio::awaitable;

export template<typename T, typename Functor>
struct callback_awaitable {
private:
    Functor&& callback;
    std::optional<T> result;

public:
    callback_awaitable(Functor&& callback): callback(std::move(callback)) {}
    callback_awaitable(callback_awaitable&& other) = delete;
    callback_awaitable(const callback_awaitable& other) = delete;
    ~callback_awaitable() = default;

    bool await_ready() const { return false; }
    void await_suspend(std::coroutine_handle<> handle) {
        callback([&, this] (T v) {
            result = v;
        });
        if (result.has_value()) {
            handle.resume();
        }
    }
    auto await_resume() const {
        return result.value();
    }
};

}
