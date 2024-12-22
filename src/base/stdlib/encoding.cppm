//
// Created by Don Yihtseu on 24-12-19.
//
module;

#include <cctype>
#include <charconv>
#include <clocale>
#include <cuchar>
#include <cwchar>
#include <cwctype>
#include <format>
#include <locale>
#include <regex>

export module standard.encoding;

export namespace std::regex_constants {

using std::regex_constants::syntax_option_type;
using std::regex_constants::error_type;
using std::regex_constants::match_flag_type;

}

export namespace std {

using std::isalnum;
using std::isalpha;
using std::islower;
using std::isupper;
using std::isdigit;
using std::isxdigit;
using std::iscntrl;
using std::isgraph;
using std::isspace;
using std::isblank;
using std::ispunct;
using std::tolower;
using std::toupper;

using std::chars_format;
using std::to_chars, std::to_chars_result;
using std::from_chars, std::from_chars_result;

using std::lconv;
using std::setlocale;
using std::localeconv;

using std::mbstate_t;
using std::mbrtoc16;
using std::c16rtomb;
using std::mbrtoc32;
using std::c32rtomb;

using std::wint_t;
using std::tm;
using std::wcscpy;
using std::wcsncpy;
using std::wcscat;
using std::wcsncat;
using std::wcsxfrm;
using std::wcslen;
using std::wcscmp;
using std::wcsncmp;
using std::wcscoll;
using std::wcschr;
using std::wcsrchr;
using std::wcsspn;
using std::wcscspn;
using std::wcspbrk;
using std::wcsstr;
using std::wcstok;
using std::wmemcpy;
using std::wmemmove;
using std::wmemcmp;
using std::wmemchr;
using std::wmemset;
using std::mbsinit;
using std::btowc;
using std::wctob;
using std::mbrlen;
using std::mbrtowc;
using std::wcrtomb;
using std::mbsrtowcs;
using std::wcsrtombs;
using std::fgetwc, std::getwc, std::fgetws;
using std::fputwc, std::putwc, std::fputws;
using std::getwchar, std::putwchar;
using std::fwide;
using std::wscanf, std::fwscanf, std::swscanf;
using std::vwscanf, std::vfwscanf, std::vswscanf;
using std::wprintf, std::fwprintf, std::swprintf;
using std::vwprintf, std::vfwprintf, std::vswprintf;
using std::wcsftime;
using std::wcstol, std::wcstoll;
using std::wcstoul, std::wcstoull;
using std::wcstod, std::wcstold, std::wcstof;

using std::wctrans_t, std::wctype_t, std::wint_t;
using std::iswalnum;
using std::iswalpha;
using std::iswlower;
using std::iswupper;
using std::iswdigit;
using std::iswxdigit;
using std::iswcntrl;
using std::iswgraph;
using std::iswspace;
using std::iswblank;
using std::iswprint;
using std::iswpunct;
using std::iswctype;
using std::wctype;
using std::towlower;
using std::towupper;
using std::towctrans;
using std::wctrans;

using std::formattable;
using std::formatter;
using std::basic_format_parse_context, std::format_parse_context, std::wformat_parse_context;
using std::basic_format_context, std::format_context, std::wformat_context;
using std::basic_format_arg;
using std::basic_format_args, std::format_context, std::wformat_context;
using std::basic_format_string, std::format_string, std::wformat_string;
using std::format_error;
using std::format, std::format_to, std::format_to_n;
using std::formatted_size;
using std::vformat, std::vformat_to;
using std::make_format_args, std::make_wformat_args;

using std::locale;
using std::wstring_convert;
using std::wbuffer_convert;
using std::ctype_base;
using std::codecvt_base;
using std::messages_base;
using std::time_base;
using std::money_base;
using std::ctype;
using std::ctype_byname;
using std::ctype;
using std::codecvt;
using std::codecvt_byname;
using std::num_get;
using std::num_put;
using std::numpunct;
using std::numpunct_byname;
using std::collate;
using std::collate_byname;
using std::time_get;
using std::time_get_byname;
using std::time_put;
using std::time_put_byname;
using std::money_get;
using std::money_put;
using std::moneypunct;
using std::moneypunct_byname;
using std::messages;
using std::messages_byname;
using std::use_facet;
using std::has_facet;
using std::isspace;
using std::isblank;
using std::iscntrl;
using std::isupper;
using std::islower;
using std::isalpha;
using std::isdigit;
using std::ispunct;
using std::isxdigit;
using std::isalnum;
using std::isprint;
using std::isgraph;
using std::toupper;
using std::tolower;

using std::basic_regex;
using std::regex;
using std::wregex;
using std::sub_match;
using std::csub_match;
using std::wcsub_match;
using std::ssub_match;
using std::wssub_match;
using std::match_results;
using std::cmatch;
using std::wcmatch;
using std::smatch;
using std::wsmatch;
using std::regex_iterator;
using std::cregex_iterator;
using std::wcregex_iterator;
using std::sregex_iterator;
using std::wsregex_iterator;
using std::regex_token_iterator;
using std::cregex_token_iterator;
using std::wcregex_token_iterator;
using std::sregex_token_iterator;
using std::wsregex_token_iterator;
using std::regex_error;
using std::regex_traits;
using std::regex_match;
using std::regex_search;
using std::regex_replace;

}