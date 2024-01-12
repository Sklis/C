#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define S21_EPS 1e-17L
#define S21_NAN 0.0 / 0.0
#define S21_ZERO_PLUS (4.0 * (+0.0))
#define S21_ZERO_MINUS (4.0 * (-0.0))
#define S21_INFINITE_MINUS (4.0 / (-0.0))
#define S21_INFINITE 1.0 / 0.0
#define S21_M_E 2.71828182845904523536028747135266250L
#define S21_M_PI 3.14159265358979323846264338327950288L
#define S21_M_PI_2 1.57079632679489661923132169163975144L
#define S21_M_PI_4 0.785398163397448309615660845819875721L
#define ARRAY_SIZE 4095

int s21_abs(int x);
long double s21_fabs(double x);
long double s21_sqrt(double x);
long double s21_pow(double base, double exponent);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double x);
long double s21_sin(double x);
long double s21_tan(double x);

typedef union {
  double f;
  struct {
    unsigned long int m : 52;
    unsigned int e : 11;
    unsigned int s : 1;
  } parts;
} double_casting;

#endif  // SRC_S21_MATH_H_
