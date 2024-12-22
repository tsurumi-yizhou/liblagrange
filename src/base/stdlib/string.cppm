//
// Created by Don Yihtseu on 24-12-19.
//
module;

#include <cstring>
#include <string>
#include <string_view>

export module standard.string;

export using std::operator""s;
export using std::operator""sv;

export namespace std {

using std::strcpy;
using std::strncpy;
using std::strcat;
using std::strncat;
using std::strxfrm;
using std::strlen;
using std::strcmp;
using std::strncmp;
using std::strcoll;
using std::strchr;
using std::strrchr;
using std::strspn;
using std::strcspn;
using std::strpbrk;
using std::strstr;
using std::strtok;
using std::memchr;
using std::memcmp;
using std::memset;
using std::memcpy;
using std::memmove;
using std::strerror;

using std::char_traits;
using std::basic_string;
using std::string;
using std::wstring;
using std::u8string;
using std::u16string;
using std::u32string;
using std::getline;
using std::stoi, std::stol, std::stoll;
using std::stoul, std::stoull, std::stof, std::stod, std::stold;
using std::to_string, std::to_wstring;


using std::basic_string_view;
using std::string_view;
using std::wstring_view;
using std::u8string_view;
using std::u16string_view;
using std::u32string_view;

}