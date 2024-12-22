//
// Created by Don Yihtseu on 24-12-20.
//
module;

#include <boost/pfr.hpp>

export module json;

import standard;

namespace json {

export using number = std::uint64_t;
export using string = std::string_view;

export template<size_t N>
struct comp_str {
    std::array<char, N - 1> value;

    constexpr comp_str(const auto... args) : value{args...} {}

    constexpr comp_str(const char (&str)[N]) {
        std::copy_n(str, N - 1, value.data());
    }

    constexpr operator std::string_view() const { return {value.data(), N - 1}; }

    constexpr auto size() const { return N - 1; }
};

export template<comp_str, typename T>
struct field {
    T value;
};

constexpr auto digit(number value) {
    auto length = 0;
    while (value) {
        length++;
        value /= 10;
    }
    return length;
}

export struct measure_tag_t {} constexpr inline measure_tag;

export struct serialize_tag_t {} constexpr inline serialize_tag;

export struct deserialize_tag_t {} constexpr inline deserialize_tag;

export template<comp_str Name>
constexpr auto tag_invoke(measure_tag_t, field<Name, number> const &field) {
    return 3 + Name.size() + digit(field.value);
}

export template<comp_str Name>
constexpr auto tag_invoke(measure_tag_t, field<Name, string> const &field) {
    return 5 + Name.size() + field.value.length();
}

export template<typename T>
constexpr auto tag_invoke(measure_tag_t, T const &object) {
    auto length = 1;
    boost::pfr::for_each_field(object, [&length](auto &item) {
        length += tag_invoke(measure_tag, item) + 1;
    });
    return length;
}

export struct measure_t {
    template<comp_str Name>
    constexpr auto operator()(field<Name, number> const &field) const {
        return tag_invoke(measure_tag, std::forward<field < Name, number>>
        (field));
    }

    template<comp_str Name>
    constexpr auto operator()(field<Name, string> const &field) const {
        return tag_invoke(measure_tag, std::forward<field < Name, string>>
        (field));
    }

    template<typename T>
    constexpr auto operator()(T const &object) const {
        return tag_invoke(measure_tag, std::forward<T>(object));
    }
} constexpr inline measure;

export template<comp_str Name, typename Iterator>
constexpr auto tag_invoke(serialize_tag_t, field<Name, number> const &field, Iterator buffer) {
    std::format_to(buffer, R"("{}":{})", static_cast<std::string_view>(Name), field.value);
}

export template<comp_str Name, typename Iterator>
constexpr auto tag_invoke(serialize_tag_t, field<Name, string> const &field, Iterator buffer) {
    std::format_to(buffer, R"("{}":"{}")", static_cast<std::string_view>(Name), field.value);
}

export template<typename T, typename Iterator>
constexpr auto tag_invoke(serialize_tag_t, T const &object, Iterator buffer) {
    std::format_to(buffer, "{{");
    auto index = 0;
    boost::pfr::for_each_field(object, [buffer, &index](auto &item) {
        tag_invoke(serialize_tag, item, buffer);
        if (index < boost::pfr::tuple_size_v<T> - 1) {
            std::format_to(buffer, ",");
            index++;
        }
    });
    std::format_to(buffer, "}}");
}

export struct serialize_t {
    template<comp_str Name>
    constexpr auto operator()(field<Name, number> &&field, std::output_iterator<char> auto &&buffer) const {
        tag_invoke(serialize_tag, std::forward<field<Name, number>>(field),
                   std::forward<decltype(buffer)>(buffer));
    }

    template<comp_str Name>
    constexpr auto operator()(field<Name, string> &&field, std::output_iterator<char> auto &&buffer) const {
        tag_invoke(serialize_tag, std::forward<field<Name, number>>(field),
                   std::forward<decltype(buffer)>(buffer));
    }

    template<typename T>
    constexpr auto operator()(T &&object, std::output_iterator<char> auto &&buffer) const {
        tag_invoke(serialize_tag, std::forward<T>(object), std::forward<decltype(buffer)>(buffer));
    }
} constexpr inline serialize;

export struct deserialize_t {
    template<comp_str Name>
    constexpr auto operator()(field<Name, number> &&field, std::input_iterator auto &&buffer) const {
        tag_invoke(deserialize_tag, std::forward<field<Name, number>>(field), std::forward<decltype(buffer)>(buffer));
    }

    template<comp_str Name>
    constexpr auto operator()(field<Name, string> &&field, std::input_iterator auto &&buffer) const {
        tag_invoke(deserialize_tag, std::forward<decltype(field)>(field), std::forward<decltype(buffer)>(buffer));
    }

    template<typename T>
    constexpr auto operator()(T &&object, std::input_iterator auto &&buffer) const {
        tag_invoke(deserialize_tag, std::forward<T>(object), std::forward<decltype(buffer)>(buffer));
    }
} constexpr inline deserialize;

}