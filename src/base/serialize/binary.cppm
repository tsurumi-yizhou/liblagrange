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

export struct measure_tag_t {} constexpr inline measure_tag;
export struct serialize_tag_t {} constexpr inline serialize_tag;
export struct deserialize_tag_t {} constexpr inline deserialize_tag;

export template<std::integral T>
constexpr auto tag_invoke(measure_tag_t, field<T> const&) noexcept {
    return sizeof(std::uint16_t) + sizeof(T);
}

export constexpr auto tag_invoke(measure_tag_t, field<string> const& f) noexcept {
    return sizeof(std::uint16_t) + sizeof(std::uint16_t) + f.value.size();
}

export template<typename T>
constexpr auto tag_invoke(measure_tag_t, T const& object) noexcept {
    auto length = 0;
    boost::pfr::for_each_field(object, [&length] (auto& field) {
        length += tag_invoke(measure_tag, field);
    });
    return length;
}

export struct measure_t {
    template<std::integral T>
    constexpr auto operator()(field<T>&& field) const noexcept {
        return tag_invoke(measure_tag, std::forward<T>(field));
    }

    constexpr auto operator()(field<string>&& field) const noexcept {
        return tag_invoke(measure_tag, std::forward<decltype(field)>(field));
    }

    template<typename T>
    constexpr auto operator()(T&& object) const noexcept {
        return tag_invoke(measure_tag, std::forward<T>(object));
    }
} constexpr inline measure;

export template<std::integral T>
constexpr auto tag_invoke(serialize_tag_t, field<T> const& field, std::output_iterator<std::byte> auto buffer) noexcept {
    *buffer++ = static_cast<std::byte>(field.value >> 8);
    *buffer++ = static_cast<std::byte>(field.value);
}

export constexpr auto tag_invoke(serialize_tag_t, field<string> const& field, std::output_iterator<std::byte> auto buffer) noexcept {
    *buffer++ = static_cast<std::byte>(field.value.size() >> 8);
    *buffer++ = static_cast<std::byte>(field.value.size());
    std::copy(field.value.begin(), field.value.end(), buffer);
}

export template<typename T>
constexpr auto tag_invoke(serialize_tag_t, T const& object, std::output_iterator<std::byte> auto buffer) noexcept {
    boost::pfr::for_each_field(object, [buffer] (auto& field) {
        tag_invoke(serialize_tag, field, buffer);
    });
}

export struct serialize_t {
    template<std::integral T>
    constexpr auto operator()(field<T>&& field, std::output_iterator<std::byte> auto buffer) const noexcept {
        tag_invoke(serialize_tag, std::forward<T>(field), std::forward<decltype(buffer)>(buffer));
    }

    constexpr auto operator()(field<string>&& field, std::output_iterator<std::byte> auto buffer) const noexcept {
        tag_invoke(serialize_tag, std::forward<decltype(field)>(field), std::forward<decltype(buffer)>(buffer));
    }

    template<typename T>
    constexpr auto operator()(T&& object, std::output_iterator<std::byte> auto buffer) const noexcept {
        tag_invoke(serialize_tag, std::forward<T>(object), std::forward<decltype(buffer)>(buffer));
    }
} constexpr inline serialize;

export struct deserialize_t {
    template<std::integral T>
    constexpr auto operator()(field<T>&& field, std::input_iterator auto buffer) const noexcept {
        tag_invoke(deserialize_tag, std::forward<T>(field), std::forward<decltype(buffer)>(buffer));
    }

    constexpr auto operator()(field<string>&& field, std::input_iterator auto buffer) const noexcept {
        tag_invoke(deserialize_tag, std::forward<decltype(field)>(field), std::forward<decltype(buffer)>(buffer));
    }

    template<typename T>
    constexpr auto operator()(T&& object, std::input_iterator auto buffer) const noexcept {
        tag_invoke(deserialize_tag, std::forward<T>(object), std::forward<decltype(buffer)>(buffer));
    }
} constexpr inline deserialize;

}