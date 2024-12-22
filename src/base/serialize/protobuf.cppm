//
// Created by Don Yihtseu on 24-12-20.
//
module;

#include <boost/pfr.hpp>

export module protobuf;

import standard;

namespace proto {

export using int32 = std::int32_t;
export using int64 = std::int64_t;
export using uint32 = std::uint32_t;
export using uint64 = std::uint64_t;
export using sint32 = std::int32_t;
export using sint64 = std::int64_t;
export using fixed32 = std::uint32_t;
export using fixed64 = std::uint64_t;
export using sfixed32 = std::int32_t;
export using sfixed64 = std::int64_t;
export using bytes = std::vector<std::byte>;
export using string = std::string_view;

export template<typename T>
using repeat = std::vector<T>;

export template<typename K, typename V>
using dictionary = std::unordered_map<K, V>;

export template<int Num, typename T>
struct field {
    T value;
};

export struct measure_t {
    template<int Num, std::integral T>
    constexpr auto operator()(field<Num, T> const&) const {
        return 0;
    }

    template<int Num>
    constexpr auto operator()(field<Num, string> const&) const {
        return 1;
    }

    template<int Num>
    constexpr auto operator()(field<Num, bytes> const&) const {
        return 2;
    }

    template<int Num, typename T>
    constexpr auto operator()(field<Num, repeat<T>> const& field) const {
        return 0;
    }

    template<int Num, typename K, typename V>
    constexpr auto operator()(field<Num, dictionary<K, V>> const& field) const {
        return 0;
    }

    template<int Num, typename T>
    constexpr auto operator()(T const& object) const {
        auto length = 0;
        boost::pfr::for_each_field(object, [this, &length](auto &item) {
           length += this->operator()(item);
        });
        return length;
    }
} constexpr inline measure;

export template<typename Container>
struct serialize_t {
    using IteratorType = std::back_insert_iterator<Container>;

    template<int Num, std::integral T>
    constexpr auto operator()(field<Num, T> const& field, IteratorType buffer) const {
    }

    template<int Num>
    constexpr auto operator()(field<Num, string> const& field, IteratorType buffer) const {
    }

    template<int Num>
    constexpr auto operator()(field<Num, bytes> const& field, IteratorType buffer) const {
    }

    template<int Num, typename T>
    constexpr auto operator()(field<Num, repeat<T>> const& field, IteratorType buffer) const {
    }

    template<int Num, typename K, typename V>
    constexpr auto operator()(field<Num, dictionary<K, V>> const& field, IteratorType buffer) const {
    }

    template<int Num, typename T>
    constexpr auto operator()(T const& object, IteratorType buffer) const {
        boost::pfr::for_each_field(object, [this, &buffer](auto &item) {
            this->operator()(item, buffer);
        });
    }
};

export constexpr inline serialize_t<std::vector<std::byte>> serialize;

}