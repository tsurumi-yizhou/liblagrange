//
// Created by Don Yihtseu on 24-12-22.
//
import standard;
import binary;

void test_integral() {
    binary::field<binary::uint32> f{ 42 };
}

void test_string() {
    binary::field<binary::string> f{ "Hello, World!" };
}

void test_obj() {
    struct Person {
        binary::field<binary::string> name;
        binary::field<binary::uint32> age;
    } person{ { "Don Yihtseu" }, { 42 } };
}

auto main() -> int {
    test_integral();
    return 0;
}