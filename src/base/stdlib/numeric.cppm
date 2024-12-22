//
// Created by Don Yihtseu on 24-12-19.
//
module;

#include <cfenv>
#include <cmath>
#include <complex>
#include <numbers>
#include <random>
#include <valarray>

export module standard.numeric;

export using std::operator""if;
export using std::operator""i;
export using std::operator""il;

export namespace std {

using std::fenv_t;
using std::fexcept_t;
using std::feclearexcept;
using std::fetestexcept;
using std::fegetexceptflag, std::fesetexceptflag;
using std::fegetround, std::fesetround;
using std::fegetenv, std::fesetenv;
using std::feholdexcept;
using std::feupdateenv;

using std::float_t;
using std::double_t;
using std::abs, std::fabs, std::fabsf, std::fabsl;
using std::fmod, std::fmodf, std::fmodl;
using std::remainder, std::remainderf, std::remainderl;
using std::remquo, std::remquof, std::remquol;
using std::fma, std::fmaf, std::fmal;
using std::fmax, std::fmaxf, std::fmaxl;
using std::fmin, std::fminf, std::fminl;
using std::fdim, std::fdimf, std::fdiml;
using std::nan, std::nanf, std::nanl;
using std::lerp;
using std::exp, std::expf, std::expl;
using std::exp2, std::exp2f, std::exp2l;
using std::expm1, std::expm1f, std::expm1l;
using std::log, std::logf, std::logl;
using std::log10, std::log10f, std::log10l;
using std::log2, std::log2f, std::log2l;
using std::log1p, std::log1pf, std::log1pl;
using std::pow, std::powf, std::powl;
using std::sqrt, std::sqrtf, std::sqrtl;
using std::cbrt, std::cbrtf, std::cbrtl;
using std::hypot, std::hypotf, std::hypotl;
using std::sin, std::sinf, std::sinl;
using std::cos, std::cosf, std::cosl;
using std::tan, std::tanf, std::tanl;
using std::asin, std::asinf, std::asinl;
using std::acos, std::acosf, std::acosl;
using std::atan, std::atanf, std::atanl;
using std::atan2, std::atan2f, std::atan2l;
using std::sinh, std::sinhf, std::sinhl;
using std::cosh, std::coshf, std::coshl;
using std::tanh, std::tanhf, std::tanhl;
using std::asinh, std::asinhf, std::asinhl;
using std::acosh, std::acoshf, std::acoshl;
using std::atanh, std::atanhf, std::atanhl;
using std::erf, std::erff, std::erfl;
using std::erfc, std::erfcf, std::erfcl;
using std::lgamma, std::lgammaf, std::lgammal;
using std::tgamma, std::tgammaf, std::tgammal;
using std::ceil, std::ceilf, std::ceill;
using std::floor, std::floorf, std::floorl;
using std::trunc, std::truncf, std::truncl;
using std::round, std::roundf, std::roundl;
using std::lround, std::lroundf, std::lroundl;
using std::llround, std::llroundf, std::llroundl;
using std::nearbyint, std::nearbyintf, std::nearbyintl;
using std::rint, std::rintf, std::rintl;
using std::lrint, std::lrintf, std::lrintl;
using std::llrint, std::llrintf, std::llrintl;
using std::frexp, std::frexpf, std::frexpl;
using std::ldexp, std::ldexpf, std::ldexpl;
using std::modf, std::modff, std::modfl;
using std::scalbn, std::scalbnf, std::scalbnl;
using std::scalbln, std::scalblnf, std::scalblnl;
using std::ilogb, std::ilogbf, std::ilogbl;
using std::logb, std::logbf, std::logbl;
using std::nextafter, std::nextafterf, std::nextafterl;
using std::nexttoward, std::nexttowardf, std::nexttowardl;
using std::copysign, std::copysignf, std::copysignl;
using std::fpclassify;
using std::isfinite;
using std::isinf;
using std::isnan;
using std::isnormal;
using std::signbit;
using std::isgreater;
using std::isgreaterequal;
using std::isless;
using std::islessequal;
using std::islessgreater;
using std::isunordered;
/*
using std::assoc_laguerre, std::assoc_laguerref, std::assoc_laguerrel;
using std::assoc_legendre, std::assoc_legendref, std::assoc_legendrel;
using std::beta, std::betaf, std::betal;
using std::comp_ellint_1, std::comp_ellint_1f, std::comp_ellint_1l;
using std::comp_ellint_2, std::comp_ellint_2f, std::comp_ellint_2l;
using std::comp_ellint_3, std::comp_ellint_3f, std::comp_ellint_3l;
using std::cyl_bessel_i, std::cyl_bessel_if, std::cyl_bessel_il;
using std::cyl_bessel_j, std::cyl_bessel_jf, std::cyl_bessel_jl;
using std::cyl_bessel_k, std::cyl_bessel_kf, std::cyl_bessel_kl;
using std::cyl_neumann, std::cyl_neumannf, std::cyl_neumannl;
using std::ellint_1, std::ellint_1f, std::ellint_1l;
using std::ellint_2, std::ellint_2f, std::ellint_2l;
using std::ellint_3, std::ellint_3f, std::ellint_3l;
using std::expint, std::expintf, std::expintl;
using std::hermite, std::hermitef, std::hermitel;
using std::laguerre, std::laguerref, std::laguerrel;
using std::legendre, std::legendref, std::legendrel;
using std::riemann_zeta, std::riemann_zetaf, std::riemann_zetal;
using std::sph_bessel, std::sph_besself, std::sph_bessell;
using std::sph_legendre, std::sph_legendref, std::sph_legendrel;
 */
using std::complex;
using std::real;
using std::imag;
using std::abs;
using std::arg;
using std::norm;
using std::conj;
using std::proj;
using std::polar;

using std::uniform_random_bit_generator;
using std::linear_congruential_engine;
using std::mersenne_twister_engine;
using std::subtract_with_carry_engine;
using std::discard_block_engine;
using std::independent_bits_engine;
using std::shuffle_order_engine;
using std::minstd_rand0;
using std::minstd_rand;
using std::mt19937;
using std::mt19937_64;
using std::ranlux24_base;
using std::ranlux48_base;
using std::ranlux24;
using std::ranlux48;
using std::knuth_b;
using std::default_random_engine;
using std::random_device;
using std::uniform_int_distribution;
using std::uniform_real_distribution;
using std::bernoulli_distribution;
using std::binomial_distribution;
using std::geometric_distribution;
using std::negative_binomial_distribution;
using std::poisson_distribution;
using std::exponential_distribution;
using std::gamma_distribution;
using std::weibull_distribution;
using std::extreme_value_distribution;
using std::normal_distribution;
using std::lognormal_distribution;
using std::chi_squared_distribution;
using std::cauchy_distribution;
using std::fisher_f_distribution;
using std::student_t_distribution;
using std::discrete_distribution;
using std::piecewise_constant_distribution;
using std::piecewise_linear_distribution;
using std::seed_seq;
using std::generate_canonical;

using std::valarray;
using std::slice;
using std::slice_array;
using std::gslice;
using std::gslice_array;
using std::mask_array;
using std::indirect_array;
}