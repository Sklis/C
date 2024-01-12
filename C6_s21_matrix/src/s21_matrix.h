#ifndef SRC_S21_MATRIX_H_
#define SRC_S21_MATRIX_H_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct matrix_struct {
  double **matrix;
  int rows;
  int columns;
} matrix_t;

#define SUCCESS 1
#define FAILURE 0
#define OK 0
#define INCORRECT_MATRIX 1
#define CALC_ERROR 2
#define EPSILON 0.000001

int s21_create_matrix(int rows, int columns, matrix_t *result);
void s21_remove_matrix(matrix_t *A);
int s21_eq_matrix(matrix_t *A, matrix_t *B);
int s21_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result);
int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result);
int s21_mult_number(matrix_t *A, double number, matrix_t *result);
int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result);
int s21_transpose(matrix_t *A, matrix_t *result);
int s21_calc_complements(matrix_t *A, matrix_t *result);
int s21_determinant(matrix_t *A, double *result);
int s21_inverse_matrix(matrix_t *A, matrix_t *result);

// Вспомогательные

void filling_matrix(matrix_t *var, int start, int step);
int true_matrix(matrix_t *A);
int true_matrixs(matrix_t *A, matrix_t *B);
double get_det(matrix_t *A);
void minor_element_of_matrix(matrix_t *A, matrix_t *result);
void generate_matrix(matrix_t *A);
double get_rand(double min, double max);

#endif
