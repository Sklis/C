#include "s21_matrix.h"

// Создание матрицы
int s21_create_matrix(int rows, int columns, matrix_t *result) {
  int flag = OK;

  if (rows <= 0 || columns <= 0) {
    flag = INCORRECT_MATRIX;
  } else {
    result->rows = rows;
    result->columns = columns;
    result->matrix = calloc(rows, sizeof(double *));
    for (int i = 0; i < rows; i++) {
      result->matrix[i] = calloc(columns, sizeof(double *));
    }
  }
  filling_matrix(result, 0, 0);

  return flag;
}

// Очистка матрицы
void s21_remove_matrix(matrix_t *A) {
  if (A->matrix != NULL) {
    for (int i = 0; i < A->rows; i++) {
      free(A->matrix[i]);
    }
  }
  free(A->matrix);
  A->rows = 0;
  A->columns = 0;
  A->matrix = NULL;
}

// Сравнение матриц
int s21_eq_matrix(matrix_t *A, matrix_t *B) {
  int flag = SUCCESS;
  double temp = 0;

  if (true_matrix(A) != 0 || true_matrix(B) != 0) flag = FAILURE;
  if (A->rows != B->rows || A->columns != B->columns) flag = FAILURE;
  if (flag) {
    for (int i = 0; i < A->rows; ++i) {
      for (int j = 0; j < A->columns; ++j) {
        temp = A->matrix[i][j] - B->matrix[i][j];
        if (temp <= -EPSILON || temp >= EPSILON) {
          flag = FAILURE;
        }
      }
    }
  }

  return flag;
}

// Сложение матриц
int s21_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  int flag = OK;
  if (true_matrix(A) == OK && true_matrix(B) == OK) {
    if (A->rows == B->rows && A->columns == B->columns) {
      s21_create_matrix(A->rows, A->columns, result);

      for (int i = 0; i < A->rows; i++) {
        for (int j = 0; j < A->columns; j++) {
          result->matrix[i][j] = A->matrix[i][j] + B->matrix[i][j];
        }
      }
    } else {
      flag = CALC_ERROR;
    }
  } else {
    flag = INCORRECT_MATRIX;
  }

  return flag;
}

// Вычетание матриц
int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  int flag = OK;

  if (true_matrix(A) == OK && true_matrix(B) == OK) {
    if (A->rows == B->rows && A->columns == B->columns) {
      s21_create_matrix(A->rows, A->columns, result);

      for (int i = 0; i < A->rows; i++) {
        for (int j = 0; j < A->columns; j++) {
          result->matrix[i][j] = A->matrix[i][j] - B->matrix[i][j];
        }
      }
    } else {
      flag = CALC_ERROR;
    }
  } else {
    flag = INCORRECT_MATRIX;
  }

  return flag;
}

// Умножение матрицы на число
int s21_mult_number(matrix_t *A, double number, matrix_t *result) {
  int flag = OK;

  if (true_matrix(A) == OK &&
      s21_create_matrix(A->rows, A->columns, result) == OK) {
    for (int i = 0; i < A->rows; i++) {
      for (int j = 0; j < A->columns; j++) {
        result->matrix[i][j] = A->matrix[i][j] * number;
      }
    }
  } else {
    flag = INCORRECT_MATRIX;
  }

  return flag;
}

// Умножение двух матриц
int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  int flag = OK;

  if (true_matrixs(A, B) == OK) {
    if (A->columns == B->rows) {
      flag = s21_create_matrix(A->rows, B->columns, result);
      for (int i = 0; i < result->rows; i++) {
        for (int j = 0; j < result->columns; j++) {
          for (int k = 0; k < A->columns; k++) {
            result->matrix[i][j] += A->matrix[i][k] * B->matrix[k][j];
          }
        }
      }
    } else {
      flag = CALC_ERROR;
    }
  } else {
    flag = INCORRECT_MATRIX;
  }

  return flag;
}

// Транспонирование матрицы (transpose)
int s21_transpose(matrix_t *A, matrix_t *result) {
  int flag = OK;

  if (true_matrix(A) != 0) flag = INCORRECT_MATRIX;
  if (s21_create_matrix(A->columns, A->rows, result) != 0) {
    flag = INCORRECT_MATRIX;
  }
  if (!flag) {
    for (int r = 0; r < result->rows; ++r) {
      for (int c = 0; c < result->columns; ++c) {
        result->matrix[r][c] = A->matrix[c][r];
      }
    }
  }
  return flag;
}

// Минор матрицы и матрица алгебраических дополнений (calc_complements)
int s21_calc_complements(matrix_t *A, matrix_t *result) {
  int code = OK;

  if (true_matrix(A) == OK) {
    if (A->rows == A->columns) {
      s21_create_matrix(A->rows, A->columns, result);
      if (A->rows > 1) {
        minor_element_of_matrix(A, result);
      } else {
        result->matrix[0][0] = 1 / A->matrix[0][0];
      }
    } else {
      code = CALC_ERROR;
    }
  } else {
    code = INCORRECT_MATRIX;
  }
  return code;
}

// Определитель матрицы (determinant)
int s21_determinant(matrix_t *A, double *result) {
  int flag = OK;

  if (true_matrix(A) == OK) {
    if (A->rows == A->columns) {
      *result = get_det(A);
    } else {
      flag = CALC_ERROR;
    }
  } else {
    flag = INCORRECT_MATRIX;
  }

  return flag;
}

// Обратная матрица (inverse_matrix)
int s21_inverse_matrix(matrix_t *A, matrix_t *result) {
  int flag = OK;

  if (true_matrix(A) == OK) {
    if (A->rows == A->columns) {
      matrix_t Temp1, Temp2;
      double det = 0.0;
      s21_determinant(A, &det);
      if (det != 0) {
        s21_calc_complements(A, &Temp1);
        s21_transpose(&Temp1, &Temp2);
        s21_mult_number(&Temp2, 1 / det, result);
        s21_remove_matrix(&Temp1);
        s21_remove_matrix(&Temp2);
      } else {
        flag = CALC_ERROR;
      }
    } else {
      flag = CALC_ERROR;
    }
  } else {
    flag = INCORRECT_MATRIX;
  }
  return flag;
}
