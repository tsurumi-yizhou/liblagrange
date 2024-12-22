//
// Created by Don Yihtseu on 24-12-19.
//
module;

#include <chrono>
#include <ctime>

export module standard.chrono;

export using std::literals::chrono_literals::operator""h;
export using std::literals::chrono_literals::operator""min;
export using std::literals::chrono_literals::operator""s;
export using std::literals::chrono_literals::operator""ms;
export using std::literals::chrono_literals::operator""us;
export using std::literals::chrono_literals::operator""ns;
export using std::literals::chrono_literals::operator""d;
export using std::literals::chrono_literals::operator""y;

export namespace std::chrono {

using std::chrono::duration;
using std::chrono::treat_as_floating_point;
using std::chrono::duration_values;
using std::chrono::hours;
using std::chrono::minutes;
using std::chrono::seconds;
using std::chrono::milliseconds;
using std::chrono::microseconds;
using std::chrono::nanoseconds;
using std::chrono::days;
using std::chrono::weeks;
using std::chrono::months;
using std::chrono::years;

using std::chrono::time_point;
using std::chrono::system_clock;
using std::chrono::steady_clock;
using std::chrono::high_resolution_clock;
using std::chrono::last_spec;
using std::chrono::day;
using std::chrono::month;
using std::chrono::year;
using std::chrono::weekday;
using std::chrono::weekday_indexed;
using std::chrono::weekday_last;
using std::chrono::month_day;
using std::chrono::month_day_last;
using std::chrono::month_weekday;
using std::chrono::month_weekday_last;
using std::chrono::year_month;
using std::chrono::year_month_day;
using std::chrono::year_month_day_last;
using std::chrono::year_month_weekday;
using std::chrono::year_month_weekday_last;
using std::chrono::hh_mm_ss;
using std::chrono::duration_cast;
using std::chrono::time_point_cast;
using std::chrono::is_am, std::chrono::is_pm, std::chrono::make12, std::chrono::make24;
using std::chrono::duration_cast;
using std::chrono::time_point_cast;
}

export namespace std {

using std::clock_t;
using std::time_t;
using std::tm;
using std::timespec;
using std::clock;
using std::time;
using std::difftime;
using std::timespec_get;
using std::ctime;
using std::asctime;
using std::strftime;
using std::gmtime;
using std::localtime;
using std::mktime;
}