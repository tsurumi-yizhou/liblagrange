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

template<size_t N>
struct comp_str {
    std::array<char, N> value;
    constexpr comp_str(const auto... args) : value{ args... } {}
    constexpr comp_str(const char (&str)[N]) {
        std::copy_n(str, N, value.data());
    }
    constexpr operator std::string_view() const { return { value.data(), N - 1 }; }
    constexpr auto size() const { return N - 1; }
};

export template<comp_str Name, typename T>
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

export struct measure_t {
    template<comp_str Name>
    constexpr auto operator()(field<Name, number> const& field) const {
        return 1 + Name.size() + 1 + 1 + digit(field.value);
    }

    template<comp_str Name>
    constexpr auto operator()(field<Name, string> const& field) const {
        //     {   "   name          "   :   "   Don Yihtseu            "   }
        return 1 + Name.size() + 1 + 1 + 1 + field.value.length() + 1;
    }

    template<typename T>
    constexpr auto operator()(T const& object) const {
        auto length = 1;
        boost::pfr::for_each_field(object, [this, &length](auto& item) {
            length += this->operator()(item) + 1;
        });
        return length;
    }
} constexpr inline measure;

export template<typename Container>
struct serialize_t {
    using IteratorType = std::back_insert_iterator<Container>;

    template<comp_str Name>
    constexpr auto operator()(field<Name, number> const& field, IteratorType buffer) const {
        *buffer = '"'; buffer++;
        for (auto i = 0; i < Name.size(); i++) {
            *buffer = Name.value[i]; buffer++;
        }
        *buffer = '"'; buffer++;
        *buffer = ':'; buffer++;
        auto value = std::to_string(field.value);
        std::copy(value.begin(), value.end(), buffer);
    }

    template<comp_str Name>
    constexpr auto operator()(field<Name, string> const& field, IteratorType buffer) const {
        *buffer = '"'; buffer++;
        for (auto i = 0; i < Name.size(); i++) {
            *buffer = Name.value[i]; buffer++;
        }
        *buffer = '"'; buffer++;
        *buffer = ':'; buffer++;
        *buffer = '"'; buffer++;
        std::copy(field.value.begin(), field.value.end(), buffer);
        *buffer = '"'; buffer++;
    }

    template<typename T>
    constexpr auto operator()(T const& object, IteratorType buffer) const {
        *buffer = '{'; buffer++;
        auto index = 0;
        boost::pfr::for_each_field(object, [this, &buffer, &index](auto& item) {
            this->operator()(item, buffer);
            if (index < boost::pfr::tuple_size_v<T> - 1) {
                *buffer = ','; buffer++;
                index++;
            }
        });
        *buffer = '}'; buffer++;
    }
};

export constexpr inline serialize_t<std::string> serialize;

}
