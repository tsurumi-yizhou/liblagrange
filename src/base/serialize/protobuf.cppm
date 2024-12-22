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

export struct measure_tag_t {} constexpr inline measure_tag;

export struct serialize_tag_t {} constexpr inline serialize_tag;

export struct deserialize_tag_t {} constexpr inline deserialize_tag;

export template<int Num, std::integral T>
constexpr auto tag_invoke(measure_tag_t, field<Num, T> const& field) {
    return sizeof(std::uint16_t) + sizeof(T);
}

export template<int Num>
constexpr auto tag_invoke(measure_tag_t, field<Num, string> const& field) {
    return sizeof(std::uint16_t) + sizeof(std::uint16_t) + field.value.size();
}

export template<int Num>
constexpr auto tag_invoke(measure_tag_t, field<Num, bytes> const& field) {
    return sizeof(std::uint16_t) + sizeof(std::uint16_t) + field.value.size();
}

export template<int Num, typename T>
constexpr auto tag_invoke(measure_tag_t, field<Num, repeat<T>> const& field) {
    auto length = sizeof(std::uint16_t) + sizeof(std::uint16_t);
    for (auto const& item : field.value) {
        length += tag_invoke(measure_tag, item);
    }
    return length;
}

export template<int Num, typename K, typename V>
constexpr auto tag_invoke(measure_tag_t, field<Num, dictionary<K, V>> const& field) {
    return 0;
}

export template<int Num, typename T>
constexpr auto tag_invoke(measure_tag_t, T const& object) {
    auto length = 0;
    boost::pfr::for_each_field(object, [&length](auto &&item) {
        length += tag_invoke(measure_tag, std::forward<decltype(item)>(item));
    });
    return length;
}

export struct measure_t {
    template<int Num, std::integral T>
    constexpr auto operator()(field<Num, T>&& field) const {
        return tag_invoke(measure_tag, std::forward<decltype(field)>(field));
    }

    template<int Num>
    constexpr auto operator()(field<Num, string>&& field) const {
        return tag_invoke(measure_tag, std::forward<decltype(field)>(field));
    }

    template<int Num>
    constexpr auto operator()(field<Num, bytes>&& field) const {
        return tag_invoke(measure_tag, std::forward<decltype(field)>(field));
    }

    template<int Num, typename T>
    constexpr auto operator()(field<Num, repeat<T>>&& field) const {
        return tag_invoke(measure_tag, std::forward<decltype(field)>(field));
    }

    template<int Num, typename K, typename V>
    constexpr auto operator()(field<Num, dictionary<K, V>>&& field) const {
        return tag_invoke(measure_tag, std::forward<decltype(field)>(field));
    }

    template<int Num, typename T>
    constexpr auto operator()(T&& object) const {
        return tag_invoke(measure_tag, std::forward<T>(object));
    }
} constexpr inline measure;

export template<int Num, std::integral T, typename Iterator>
constexpr auto tag_invoke(serialize_tag_t, field<Num, T> const& field, Iterator buffer) {}

export template<int Num, typename Iterator>
constexpr auto tag_invoke(serialize_tag_t, field<Num, string> const& field, Iterator buffer) {}

export template<int Num, typename Iterator>
constexpr auto tag_invoke(serialize_tag_t, field<Num, bytes> const& field, Iterator buffer) {}

export template<int Num, typename T, typename Iterator>
constexpr auto tag_invoke(serialize_tag_t, field<Num, repeat<T>> const& field, Iterator buffer) {}

export template<int Num, typename K, typename V, typename Iterator>
constexpr auto tag_invoke(serialize_tag_t, field<Num, dictionary<K, V>> const& field, Iterator buffer) {}

export template<int Num, typename T, typename Iterator>
constexpr auto tag_invoke(serialize_tag_t, T const& object, Iterator buffer) {
    boost::pfr::for_each_field(object, [&buffer](auto&& field) {
        tag_invoke(serialize_tag, std::forward<decltype(field)>(field), buffer);
    });
}

export struct serialize_t {
    template<int Num, std::integral T>
    constexpr auto operator()(field<Num, T>&& field, std::output_iterator<std::byte> auto buffer) const {
        tag_invoke(serialize_tag, std::forward<decltype(field)>(field), std::forward<decltype(buffer)>(buffer));
    }

    template<int Num>
    constexpr auto operator()(field<Num, string>&& field, std::output_iterator<std::byte> auto buffer) const {
        tag_invoke(serialize_tag, std::forward<decltype(field)>(field), std::forward<decltype(buffer)>(buffer));
    }

    template<int Num>
    constexpr auto operator()(field<Num, bytes>&& field, std::output_iterator<std::byte> auto buffer) const {
        tag_invoke(serialize_tag, std::forward<decltype(field)>(field), std::forward<decltype(buffer)>(buffer));
    }

    template<int Num, typename T>
    constexpr auto operator()(field<Num, repeat<T>>&& field, std::output_iterator<std::byte> auto buffer) const {
        tag_invoke(serialize_tag, std::forward<decltype(field)>(field), std::forward<decltype(buffer)>(buffer));
    }

    template<int Num, typename K, typename V>
    constexpr auto operator()(field<Num, dictionary<K, V>>&& field, std::output_iterator<std::byte> auto buffer) const {
        tag_invoke(serialize_tag, std::forward<decltype(field)>(field), std::forward<decltype(buffer)>(buffer));
    }

    template<int Num, typename T>
    constexpr auto operator()(T&& object, std::output_iterator<std::byte> auto buffer) const {
        tag_invoke(serialize_tag, std::forward<T>(object), std::forward<decltype(buffer)>(buffer));
    }
} constexpr inline serialize;

export template<int Num, std::integral T, typename Iterator>
constexpr auto tag_invoke(deserialize_tag_t, field<Num, T> const& field, Iterator buffer) {}

export template<int Num, typename Iterator>
constexpr auto tag_invoke(deserialize_tag_t, field<Num, string> const& field, Iterator buffer) {}

export template<int Num, typename Iterator>
constexpr auto tag_invoke(deserialize_tag_t, field<Num, bytes> const& field, Iterator buffer) {}

export template<int Num, typename T, typename Iterator>
constexpr auto tag_invoke(deserialize_tag_t, field<Num, repeat<T>> const& field, Iterator buffer) {}

export template<int Num, typename K, typename V, typename Iterator>
constexpr auto tag_invoke(deserialize_tag_t, field<Num, dictionary<K, V>> const& field, Iterator buffer) {}

export template<int Num, typename T, typename Iterator>
constexpr auto tag_invoke(deserialize_tag_t, T const& object, Iterator buffer) {
    boost::pfr::for_each_field(object, [&buffer](auto&& field) {
        tag_invoke(deserialize_tag, std::forward<decltype(field)>(field), buffer);
    });
}

export struct deserialize_t {
    template<int Num, std::integral T>
    constexpr auto operator()(field<Num, T>&& field, std::input_iterator auto buffer) const {
        tag_invoke(deserialize_tag, std::forward<decltype(field)>(field), std::forward<decltype(buffer)>(buffer));
    }

    template<int Num>
    constexpr auto operator()(field<Num, string>&& field, std::input_iterator auto buffer) const {
        tag_invoke(deserialize_tag, std::forward<decltype(field)>(field), std::forward<decltype(buffer)>(buffer));
    }

    template<int Num>
    constexpr auto operator()(field<Num, bytes>&& field, std::input_iterator auto buffer) const {
        tag_invoke(deserialize_tag, std::forward<decltype(field)>(field), std::forward<decltype(buffer)>(buffer));
    }

    template<int Num, typename T>
    constexpr auto operator()(field<Num, repeat<T>>&& field, std::input_iterator auto buffer) const {
        tag_invoke(deserialize_tag, std::forward<decltype(field)>(field), std::forward<decltype(buffer)>(buffer));
    }

    template<int Num, typename K, typename V>
    constexpr auto operator()(field<Num, dictionary<K, V>>&& field, std::input_iterator auto buffer) const {
        tag_invoke(deserialize_tag, std::forward<decltype(field)>(field), std::forward<decltype(buffer)>(buffer));
    }

    template<int Num, typename T>
    constexpr auto operator()(T&& object, std::input_iterator auto buffer) const {
        tag_invoke(deserialize_tag, std::forward<T>(object), std::forward<decltype(buffer)>(buffer));
    }
} constexpr inline deserialize;

}