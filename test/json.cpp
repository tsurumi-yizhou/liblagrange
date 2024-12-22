//
// Created by Don Yihtseu on 24-12-20.
//
import standard;
import json;

void test_number() {
    json::field<"age", json::number> age { 42 };
    std::string buffer;
    json::serialize(age, std::back_insert_iterator<std::string>(buffer));
    std::println("serialize: {}", buffer);
}

void test_string() {
    json::field<"name", json::string> name { "Don Yihtseu" };
    std::string buffer;
    json::serialize(name, std::back_insert_iterator<std::string>(buffer));
    std::println("serialize: {}", buffer);
}

void test_obj() {
    struct Person {
        json::field<"name", json::string> name;
        json::field<"age", json::number> age;
    };
    Person person{{"Don Yihtseu"},{42}};
    std::string buffer;
    json::serialize(person, std::back_insert_iterator<std::string>(buffer));
    std::println("serialize: {}", buffer);
}

auto main() -> int {
    test_number();
    test_string();
    test_obj();
    return 0;
}