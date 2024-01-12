#include "s21_math.h"

#include <float.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

static bool s21_isnan(double x);
static bool s21_is_int(double x);
static bool s21_is_odd_int(double x);
static bool s21_is_even_int(double x);
static bool s21_is_finite(double x);
static bool s21_is_sighed(double x);
static unsigned int s21_n_of_digits_before_point(double x);

int s21_abs(int x) {
  int result = x;
  if (result < 0) {
    result *= -1;
  }
  return result;
}

long double s21_fabs(double x) {
  long double result = (long double)x;
  if (s21_isnan(result)) {
    result = S21_NAN;
  } else if (result == S21_ZERO_MINUS) {
    result = S21_ZERO_PLUS;
  } else if (result <= 0.0) {
    result *= -1;
  }

  return result;
}

static bool s21_isnan(double x) {
  bool result = false;
  if (x != x) {
    result = true;
  }
  return result;
}

static bool s21_is_int(double x) {
  bool result = false;

  long long int integer = (long long int)x;
  if (x - integer == 0) {
    result = true;
  }
  return result;
}

static bool s21_is_odd_int(double x) {
  bool result = false;
  if (s21_is_int(x) == true) {
    int number = (long long int)x;
    if ((number % 2) != 0) {
      result = true;
    }
  }
  return result;
}

static bool s21_is_even_int(double x) {
  bool result = false;
  if (s21_is_int(x) == true) {
    long long int number = (long long int)x;
    if ((number % 2) == 0) {
      result = true;
    }
  }
  return result;
}

static bool s21_is_finite(double x) {
  bool result = true;
  if (x == S21_INFINITE || x == S21_INFINITE_MINUS) {
    result = false;
  }
  return result;
}

static bool s21_is_sighed(double x) {
  bool result = false;
  double_casting a;
  a.f = x;
  if (a.parts.s == 1) {
    result = true;
  }
  return result;
}

long double s21_sqrt(double x) {
  long double res = 0;
  if (x < 0 || s21_isnan(x)) {
    res = S21_NAN;
  } else if (x == S21_INFINITE || x == S21_ZERO_MINUS || x == S21_ZERO_PLUS) {
    res = x;
  } else {
    res = s21_pow(x, 0.5);
  }
  return res;
}

long double s21_pow(double base, double exponent) {
  long double result = 0;
  int tmp = 0;

  // pow(+0, exp), where exp is a negative odd integer, returns +∞ and
  // raises FE_DIVBYZERO
  if (base == S21_ZERO_PLUS && exponent < 0 &&
      s21_is_odd_int(exponent) == true && s21_is_sighed(base) == false) {
    result = S21_INFINITE;
  }

  // pow(-0, exp), where exp is a negative odd integer, returns -∞ and
  // raises FE_DIVBYZERO

  else if (base == S21_ZERO_MINUS && exponent < 0 &&
           s21_is_odd_int(exponent) == true && s21_is_sighed(base) == true) {
    result = S21_INFINITE_MINUS;
  }

  // pow(±0, exp), where exp is negative, finite, and is an even integer
  // or a non-integer, returns +∞ and raises FE_DIVBYZERO
  else if ((base == S21_ZERO_PLUS || base == S21_ZERO_MINUS) && exponent < 0 &&
           exponent != S21_INFINITE_MINUS &&
           ((s21_is_int(exponent) == true &&
             s21_is_even_int(exponent) == true) ||
            s21_isnan(exponent) == false)) {
    result = S21_INFINITE;
  }

  // pow(±0, -∞) returns +∞ and may raise FE_DIVBYZERO (until C23)
  else if ((base == S21_ZERO_PLUS || base == S21_ZERO_MINUS) &&
           exponent == S21_INFINITE_MINUS) {
    result = S21_INFINITE;
  }

  // pow(+0, exp), where exp is a positive odd integer, returns +0
  else if (base == S21_ZERO_PLUS && exponent > 0 &&
           s21_is_odd_int(exponent) == true) {
    result = S21_ZERO_PLUS;
  }

  // pow(-0, exp), where exp is a positive odd integer, returns -0
  else if (base == S21_ZERO_MINUS && exponent > 0 &&
           s21_is_odd_int(exponent) == true) {
    result = S21_ZERO_MINUS;
  }

  // pow(±0, exp), where exp is positive non-integer or a positive even
  // integer, returns +0
  else if ((base == S21_ZERO_MINUS || base == S21_ZERO_PLUS) && exponent > 0 &&
           (s21_is_int(exponent) == false ||
            s21_is_even_int(exponent) == true)) {
    result = S21_ZERO_PLUS;
  }

  // pow(-1, ±∞) returns 1
  else if (base == -1 &&
           (exponent == S21_INFINITE || exponent == S21_INFINITE_MINUS)) {
    result = 1;
  }

  // pow(+1, exp) returns 1 for any exp, even when exp is NaN
  else if (base == 1) {
    result = 1;
  }

  // pow(base, ±0) returns 1 for any base, even when base is NaN
  else if (exponent == S21_ZERO_PLUS || exponent == S21_ZERO_MINUS) {
    result = 1;
  }

  // pow(base, exp) returns NaN and raises FE_INVALID if base is finite and
  // negative and exp is finite and non-integer.
  else if (s21_is_finite(base) == true && base < 0 &&
           s21_is_finite(exponent) == true && s21_is_int(exponent) == false) {
    result = S21_NAN;
  }

  // pow(base, -∞) returns +∞ for any |base|<1
  else if (exponent == S21_INFINITE_MINUS && s21_fabs(base) < 1) {
    result = S21_INFINITE;
  }

  // pow(base, -∞) returns +0 for any |base|>1
  else if (exponent == S21_INFINITE_MINUS && s21_fabs(base) > 1) {
    result = S21_ZERO_PLUS;
  }

  // pow(base, +∞) returns +0 for any |base|<1
  else if (exponent == S21_INFINITE && s21_fabs(base) < 1) {
    result = 0;
  }

  // pow(base, +∞) returns +∞ for any |base|>1
  else if (exponent == S21_INFINITE && s21_fabs(base) > 1) {
    result = S21_INFINITE;
  }

  // pow(-∞, exp) returns -0 if exp is a negative odd integer
  else if (base == S21_INFINITE_MINUS && exponent < 0 &&
           s21_is_odd_int(exponent) == true) {
    result = S21_ZERO_MINUS;
  }

  // pow(-∞, exp) returns +0 if exp is a negative non-integer or
  // negative even integer

  else if (base == S21_INFINITE_MINUS && exponent < 0 &&
           (s21_is_int(exponent) == false ||
            (s21_is_int(exponent) == true &&
             s21_is_even_int(exponent) == true))) {
    result = S21_ZERO_PLUS;
  }

  // pow(-∞, exp) returns -∞ if exp is a positive odd integer
  else if (base == S21_INFINITE_MINUS && exponent > 0 &&
           s21_is_odd_int(exponent) == true) {
    result = S21_INFINITE_MINUS;
  }

  // pow(-∞, exp) returns +∞ if exp is a positive non-integer or
  // positive even integer
  else if (base == S21_INFINITE_MINUS && exponent > 0 &&
           (s21_is_int(exponent) == false ||
            s21_is_even_int(exponent) == true)) {
    result = S21_INFINITE;
  }

  // pow(+∞, exp) returns +0 for any negative exp
  else if (base == S21_INFINITE && exponent < 0) {
    result = S21_ZERO_PLUS;
  }

  // pow(+∞, exp) returns +∞ for any positive exp
  else if (base == S21_INFINITE && exponent > 0) {
    result = S21_INFINITE;
  }

  // except where specified above, if any argument is NaN, NaN is returned
  else if (s21_isnan(base) || s21_isnan(exponent)) {
    result = S21_NAN;
  } else if (base < 0 && exponent == 0) {
    result = S21_NAN;
  } else if (base < 0 && s21_is_finite(base) == true &&
             s21_is_finite(exponent) == true && s21_is_int(exponent) == false) {
    result = S21_NAN;
  }

  else {
    if (base < 0) {
      if ((int)exponent % 2 != 0) {
        tmp = 1;
      }
      base = s21_fabs(base);
    }
    result = tmp ? -s21_exp(exponent * s21_log(base))
                 : s21_exp(exponent * s21_log(base));
  }
  return result;
}

long double s21_acos(double x) {
  long double result = 0.0;
  if (s21_isnan(x)) {
    result = S21_NAN;
  } else if (x == 1) {
    result = 0;
  } else if (x > 1 || x < -1) {
    result = S21_NAN;
  } else {
    result = S21_M_PI / 2 - s21_asin(x);
  }
  return result;
}

long double s21_asin(double x) {
  long double result = 0.0;
  if (s21_isnan(x) || x > 1 || x < -1) {
    result = S21_NAN;
  } else if (x >= (1 - S21_EPS)) {
    result = S21_M_PI_2;
  } else if (x <= (-1 + S21_EPS)) {
    result = -S21_M_PI_2;
  } else if (x < 0) {
    result = -(s21_asin(-1 * x));
  } else {
    result = s21_atan(x / s21_sqrt(1 - x * x));
  }
  return result;
}

long double s21_atan(double x) {
  long double result = x;
  if (s21_isnan(x)) {
    result = S21_NAN;
  } else if (x < 0) {
    result = -s21_atan(-1 * x);
  } else if (x > 1) {
    result = S21_M_PI_2 - s21_atan(1.0 / x);
  } else if (x == 1) {
    result = S21_M_PI_4;
  } else {
    long double term = x;
    for (int i = 1; s21_fabs(term) > S21_EPS; i += 1) {
      term *= -x * x * (2 * i - 1) / (2 * i + 1);
      result += term;
    }
  }
  return result;
}

static unsigned int s21_n_of_digits_before_point(double x) {
  unsigned int result = 0;
  char string[4095] = {0};
  sprintf(string, "%lf", x);
  char *point_found = strchr(string, '.');
  result = point_found - string;
  return result;
}

double s21_double_into_int(double x) {
  double y = 0.0;
  char string[4095] = {0};
  sprintf(string, "%lf", x);
  unsigned int integer_part = s21_n_of_digits_before_point(x);
  string[integer_part] = '\0';
  sscanf(string, "%lf", &y);
  return y;
}

long double s21_ceil(double x) {
  long double result = 0.0;
  if (x == S21_INFINITE || x == -S21_INFINITE || x == 0) {
    result = x;
  } else if (s21_isnan(x)) {
    result = S21_NAN;
  } else {
    result = s21_double_into_int(x);
    if (x > 0 && s21_is_int(x) == false) {
      result = result + 1;
    }
  }
  return result;
}

long double s21_floor(double x) {
  unsigned int integer_part = s21_n_of_digits_before_point(x);
  long double result = 0.0;

  if (x == S21_INFINITE || x == -S21_INFINITE || x == 0) {
    result = x;
  } else if (s21_isnan(x)) {
    result = S21_NAN;
  } else {
    result = s21_double_into_int(x);
    if (s21_is_int(x) == false && x < 0 && (int)integer_part < 17) {
      result = (long long int)x - 1;
    }
  }
  return result;
}

long double s21_cos(double x) {
  long double result = 1;
  if (s21_isnan(x) || x == S21_INFINITE || x == -S21_INFINITE) {
    result = S21_NAN;
  } else if (x == 0) {
    result = 1.0;
  } else {
    if (s21_fabs(x) > 2 * S21_M_PI) {
      x = s21_fmod(x, 2 * S21_M_PI);
    }
    long double term = 1.0;
    for (int i = 1; s21_fabs(term) > S21_EPS; i += 1) {
      term *= -x * x / (2 * i - 1) / (2 * i);
      result += term;
    }
  }
  return result;
}

long double s21_exp(double x) {
  long double result = 1.0;
  if (x == 0) {
    result = 1;
  } else if (x == -S21_INFINITE) {
    result = 0;
  } else if (x == S21_INFINITE) {
    result = S21_INFINITE;
  } else if (s21_isnan(x)) {
    result = S21_NAN;
  } else if (s21_fabs(x) > 300) {
    result = S21_INFINITE;
  } else if (x > -2.0e-300 && x < 2.0e-300) {
    result = 1;
  } else {
    long double term = 1;
    for (long double i = 1; s21_fabs(term) > S21_EPS; i += 1) {
      term *= x / i;
      result += term;
    }
  }
  return result;
}

long double s21_fmod(double x, double y) {
  long double result = x;
  if (x == 0 && y != 0) {
    result = 0;
  } else if (y == 0.0 && !(s21_isnan(x))) {
    result = S21_NAN;
  } else if ((x == S21_INFINITE || x == -S21_INFINITE) && !(s21_isnan(y))) {
    result = S21_NAN;
  } else if ((y == S21_INFINITE || y == -S21_INFINITE) &&
             (x != S21_INFINITE && x != -S21_INFINITE)) {
    result = x;
  } else if (s21_isnan(x) || s21_isnan(y)) {
    result = S21_NAN;
  } else {
    y = s21_fabs(y);
    if (x > 0) {
      for (; result >= y;) {
        result -= y;
      }
    } else {
      for (; result <= -y;) {
        result += y;
      }
    }
  }
  return result;
}

long double s21_log(double x) {
  long double result = 0.0;
  if (x < 0 || x != x) {
    result = S21_NAN;
  } else if (x == 1) {
    result = 0;
  } else if (x == 0) {
    result = -S21_INFINITE;
  } else if (x == S21_INFINITE) {
    result = S21_INFINITE;
  } else {
    long double exp_power = 0.0;
    for (; x >= S21_M_E; x = x / S21_M_E, exp_power++)
      ;
    for (int i = 0; i < 100; i++) {
      long double prev_res = result;
      result = prev_res + 2 * (x - s21_exp(prev_res)) / (x + s21_exp(prev_res));
    }
    result = result + exp_power;
  }
  return result;
}

long double s21_sin(double x) {
  long double result = x;

  if (x == 0) {
    result = x;
  } else if (s21_isnan(x) || x == S21_INFINITE || x == -S21_INFINITE) {
    result = S21_NAN;
  } else {
    if (s21_fabs(x) > 2 * S21_M_PI) {
      x = s21_fmod(x, 2 * S21_M_PI);
      result = x;
    }
    long double term = x;

    for (int i = 1; s21_fabs(term) > S21_EPS; i += 1) {
      term *= -x * x / (2 * i * (2 * i + 1));
      result += term;
    }
  }
  return result;
}

long double s21_tan(double x) {
  long double result = 0.0;
  if (s21_isnan(x) || x == S21_INFINITE || x == -S21_INFINITE) {
    result = S21_NAN;
  } else if (x == 0) {
    result = x;
  } else {
    result = s21_sin(x) / s21_cos(x);
  }
  return result;
}
