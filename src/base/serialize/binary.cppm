//
// Created by Don Yihtseu on 24-12-20.
//
module ;

#include <boost/pfr.hpp>

export module binary;

import standard;

namespace binary {

export template<typename T>
struct field {
    T value;
};

export using uint8 = std::uint8_t;
export using int8 = std::int8_t;
export using uint16 = std::uint16_t;
export using int16 = std::int16_t;
export using uint32 = std::uint32_t;
export using int32 = std::int32_t;
export using uint64 = std::uint64_t;
export using int64 = std::int64_t;
export using string = std::string_view;
export using bytes = std::vector<std::byte>;

export struct measure_t {
    template<std::integral T>
    constexpr auto operator()(field<T> const&) const noexcept {
        return sizeof(std::uint16_t) + sizeof(T);
    }

    constexpr auto operator()(field<string> const& f) const noexcept {
        return sizeof(std::uint16_t) + sizeof(std::uint16_t) + f.value.size();
    }

    template<typename T>
    constexpr auto operator()(T const& object) const noexcept {
        auto length = 0;
        boost::pfr::for_each_field(object, [this, &length] (auto& field) {
            length += this->operator()(field);
        });
        return length;
    }
} constexpr inline measure;

export template<typename Container>
struct serialize_t {
    using IteratorType = std::back_insert_iterator<Container>;

    template<std::integral T>
    constexpr auto operator()(field<T> const& field, IteratorType buffer) const noexcept {
    }

    constexpr auto operator()(field<string> const& field, IteratorType buffer) const noexcept {
    }

    template<typename T>
    constexpr auto operator()(T const& object, IteratorType buffer) const noexcept {
        boost::pfr::for_each_field(object, [this, &buffer] (auto& field) {
            this->operator()(field, buffer);
        });
    }
};

export constexpr inline serialize_t<std::vector<std::byte>> serialize;

}