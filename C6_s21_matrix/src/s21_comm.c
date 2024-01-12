#include "s21_matrix.h"

// Заполнение или обнуление матрицы
void filling_matrix(matrix_t *var, int start, int step) {
  for (int i = 0; i < var->rows; i++) {
    for (int j = 0; j < var->columns; j++) {
      var->matrix[i][j] = start;
      start += step;
    }
  }
}

// Проверка на правильность матрицы
int true_matrix(matrix_t *A) {
  int flag = OK;
  if (A == NULL || A->matrix == NULL || A->rows <= 0 || A->columns <= 0) {
    flag = INCORRECT_MATRIX;
  }

  return flag;
}

int true_matrixs(matrix_t *A, matrix_t *B) {
  int flag = OK;
  if (true_matrix(A) != OK && true_matrix(B) != OK) flag = INCORRECT_MATRIX;
  return flag;
}

// Вз
double get_det(matrix_t *A) {
  double result = 0.0;
  int n = A->rows;

  if (n == 1) {
    result = A->matrix[0][0];
  } else if (n == 2) {
    result =
        A->matrix[0][0] * A->matrix[1][1] - A->matrix[0][1] * A->matrix[1][0];
  } else {
    for (int k = 0; k < n; k++) {
      matrix_t tempMatrix;
      s21_create_matrix(n - 1, n - 1, &tempMatrix);

      for (int i = 1; i < n; i++) {
        int t = 0;

        for (int j = 0; j < n; j++) {
          if (j == k) {
            continue;
          }

          tempMatrix.matrix[i - 1][t] = A->matrix[i][j];
          t++;
        }
      }

      result += pow(-1, k + 2) * A->matrix[0][k] * get_det(&tempMatrix);
      s21_remove_matrix(&tempMatrix);
    }
  }

  return result;
}

// Минор элемента матрицы
void minor_element_of_matrix(matrix_t *A, matrix_t *result) {
  for (int k = 0; k < A->rows; k++) {
    for (int l = 0; l < A->columns; l++) {
      matrix_t minor = {0};
      int minorRow = 0;
      int minorCol = 0;
      double determinant = 0;
      s21_create_matrix(A->columns - 1, A->rows - 1, &minor);

      for (int i = 0; i < A->rows; i++) {
        if (i == k) {
          continue;
        }
        minorCol = 0;

        for (int j = 0; j < A->columns; j++) {
          if (j == l) {
            continue;
          }
          minor.matrix[minorRow][minorCol] = A->matrix[i][j];
          minorCol++;
        }

        minorRow++;
      }

      s21_determinant(&minor, &determinant);
      result->matrix[k][l] = pow(-1, (k + l)) * determinant;
      s21_remove_matrix(&minor);
    }
  }
}

// Заполнение матрицы случайными числами
void generate_matrix(matrix_t *A) {
  for (int i = 0; i < A->rows; i++) {
    for (int j = 0; j < A->columns; j++) {
      A->matrix[i][j] = rand() % 100;
    }
  }
}

// Генерация случайлого числа
double get_rand(double min, double max) {
  double val = (double)rand() / RAND_MAX;
  return min + val * (max - min);
}