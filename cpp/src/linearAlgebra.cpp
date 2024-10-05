#include <cstdio>
#include <cstdlib>

struct Matrix {
  int row, col;
  double *data;
};

Matrix *createMatrix(int row, int col) {
  Matrix *matrix = (Matrix *)malloc(sizeof(Matrix));
  matrix->row = row;
  matrix->col = col;
  matrix->data = (double *)malloc(row * col * sizeof(double));
  return matrix;
}

void freeMatrix(Matrix *matrix) {
  free(matrix->data);
  free(matrix);
}

void printMatrix(Matrix *matrix) {
  for (int i = 0; i < matrix->row; i++) {
    for (int j = 0; j < matrix->col; j++) {
      printf("%.2lf ", matrix->data[i * matrix->col + j]);
    }
    printf("\n");
  }
}