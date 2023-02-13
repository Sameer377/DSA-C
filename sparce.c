#include <stdio.h>
#include <stdlib.h>

struct element {
  int row;
  int col;
  int value;
};

struct sparse_matrix {
  int num_rows;
  int num_cols;
  int num_non_zero;
  struct element *elements;
};

struct sparse_matrix create_sparse_matrix(int num_rows, int num_cols, int num_non_zero, int elements[][3]) {
  struct sparse_matrix mat;
  mat.num_rows = num_rows;
  mat.num_cols = num_cols;
  mat.num_non_zero = num_non_zero;
  mat.elements = (struct element*) malloc(num_non_zero * sizeof(struct element));
  for (int i = 0; i < num_non_zero; i++) {
    mat.elements[i].row = elements[i][0];
    mat.elements[i].col = elements[i][1];
    mat.elements[i].value = elements[i][2];
  }
  return mat;
}

void display_sparse_matrix(struct sparse_matrix mat) {
  printf("Rows: %d, Columns: %d, Non-zero elements: %d\n", mat.num_rows, mat.num_cols, mat.num_non_zero);
  printf("row\tcol\tvalue\n");
  for (int i = 0; i < mat.num_non_zero; i++) {
    printf("%d\t%d\t%d\n", mat.elements[i].row, mat.elements[i].col, mat.elements[i].value);
  }
}

int main() {
  int elements[][3] = {{0, 1, 5}, {1, 2, 8}, {2, 3, 9}};
  struct sparse_matrix mat = create_sparse_matrix(3, 4, 3, elements);
  display_sparse_matrix(mat);
  return 0;
}
