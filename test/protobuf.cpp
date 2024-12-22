//
// Created by Don Yihtseu on 24-12-22.
//
import standard;
import protobuf;

auto main() -> int {
    proto::field<2, proto::uint32> age;
    std::println("proto::field<2, proto::uint32>: {}", proto::measure(age));
    proto::field<1, proto::string> guid;
    std::println("proto::field<1, proto::string>: {}", proto::measure(guid));
    struct Person {
        proto::field<1, proto::string> name;
        proto::field<2, proto::uint32> age;
    } person;
    std::println("Person: {}", proto::measure(proto::field<1, Person>{ { "Don Yihtseu", { 18 } } }));
    return 0;
}