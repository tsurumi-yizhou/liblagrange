//
// Created by Don Yihtseu on 24-12-19.
//
module;

#include <cinttypes>
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <ostream>
#include <print>
#include <sstream>
#include <streambuf>

export module standard.io;

export namespace std::filesystem {
using std::filesystem::path;
using std::filesystem::filesystem_error;
using std::filesystem::directory_entry;
using std::filesystem::directory_iterator;
using std::filesystem::recursive_directory_iterator;
using std::filesystem::file_status;
using std::filesystem::space_info;
using std::filesystem::file_type;
using std::filesystem::perms;
using std::filesystem::perm_options;
using std::filesystem::copy_options;
using std::filesystem::directory_options;
using std::filesystem::file_time_type;
using std::filesystem::absolute;
using std::filesystem::canonical, std::filesystem::weakly_canonical;
using std::filesystem::relative, std::filesystem::proximate;
using std::filesystem::copy;
using std::filesystem::copy_file;
using std::filesystem::copy_symlink;
using std::filesystem::create_directory;
using std::filesystem::create_directories;
using std::filesystem::create_hard_link;
using std::filesystem::create_symlink;
using std::filesystem::create_directory_symlink;
using std::filesystem::current_path;
using std::filesystem::exists;
using std::filesystem::equivalent;
using std::filesystem::file_size;
using std::filesystem::hard_link_count;
using std::filesystem::last_write_time;
using std::filesystem::permissions;
using std::filesystem::read_symlink;
using std::filesystem::remove, std::filesystem::remove_all;
using std::filesystem::rename;
using std::filesystem::resize_file;
using std::filesystem::space;
using std::filesystem::status, std::filesystem::symlink_status;
using std::filesystem::temp_directory_path;
using std::filesystem::is_block_file;
using std::filesystem::is_character_file;
using std::filesystem::is_directory;
using std::filesystem::is_empty;
using std::filesystem::is_fifo;
using std::filesystem::is_other;
using std::filesystem::is_regular_file;
using std::filesystem::is_socket;
using std::filesystem::is_symlink;
using std::filesystem::status_known;
}

export namespace std {

using std::imaxdiv_t;
using std::imaxabs;
using std::imaxdiv;
using std::strtoimax, std::strtoumax;
using std::wcstoimax, std::wcstoumax;

using std::FILE;
using std::fpos_t;
using std::fopen;
using std::freopen;
using std::fclose;
using std::fflush;
using std::setbuf;
using std::setvbuf;
using std::fread;
using std::fwrite;
using std::fgetc, std::getc, std::fgets;
using std::fputc, std::putc, std::fputs;
using std::getchar;
using std::putchar;
using std::ungetc;
using std::scanf, std::fscanf, std::sscanf;
using std::vscanf, std::vfscanf, std::vsscanf;
using std::printf, std::fprintf, std::sprintf, std::snprintf;
using std::vprintf, std::vfprintf, std::vsprintf, std::vsnprintf;
using std::ftell;
using std::fgetpos;
using std::fseek;
using std::fsetpos;
using std::rewind;
using std::clearerr;
using std::feof;
using std::ferror;
using std::perror;
using std::remove;
using std::rename;
using std::tmpfile;
using std::tmpnam;

using std::basic_filebuf;
using std::basic_ifstream;
using std::basic_ofstream;
using std::basic_fstream;
using std::filebuf;
using std::wfilebuf;
using std::ifstream;
using std::wifstream;
using std::ofstream;
using std::wofstream;
using std::fstream;
using std::wfstream;

using std::resetiosflags;
using std::setiosflags;
using std::setbase;
using std::setfill;
using std::setprecision;
using std::setw;
using std::get_money;
using std::put_money;
using std::get_time;
using std::put_time;
using std::quoted;

using std::ios_base;
using std::basic_ios;
using std::ios;
using std::wios;
using std::fpos;
using std::io_errc;
using std::streambuf;
using std::streamsize;
using std::iostream_category;
using std::boolalpha, std::noboolalpha;
using std::showbase, std::noshowbase;
using std::showpoint, std::noshowpoint;
using std::showpos, std::noshowpos;
using std::skipws, std::noskipws;
using std::uppercase, std::nouppercase;
using std::unitbuf, std::nounitbuf;
using std::internal, std::left, std::right;
using std::dec, std::hex, std::oct;
using std::fixed, std::scientific;
using std::hexfloat, std::defaultfloat;

using std::streampos;
using std::wstreampos;
using std::u8streampos;
using std::u16streampos;
using std::u32streampos;

using std::cin, std::wcin;
using std::cout, std::wcout;
using std::cerr, std::wcerr;
using std::clog, std::wclog;

using std::basic_istream;
using std::istream, std::ostream;
using std::wistream, std::wostream;
using std::basic_iostream, std::basic_ostream;
using std::iostream;
using std::wiostream;
using std::ws;
using std::endl;
using std::ends;
using std::flush;

using std::print;
using std::println;
using std::vprint_unicode, std::vprint_nonunicode;

using std::basic_streambuf;
using std::basic_istringstream;
using std::basic_ostringstream;
using std::basic_stringstream;
using std::stringbuf;
using std::wstringbuf;
using std::istringstream;
using std::wistringstream;
using std::ostringstream;
using std::wostringstream;
using std::stringstream;
using std::wstringstream;

}