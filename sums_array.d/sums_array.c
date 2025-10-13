#include <stdio.h>

#define N_ROW 5
#define N_COL 5

int main(void) {
  int table[N_ROW][N_COL];
  int col_sum[N_COL] = {0}, row_sum[N_ROW] = {0};

  // Read in data
  for (int r = 0; r < N_ROW; r++) {
    printf("Enter row %d: ", r + 1);
    for (int c = 0; c < N_COL; c++) {
      scanf("%d", &table[r][c]);
    }
  }

  for (int r = 0; r < N_ROW; r++) {
    for (int c = 0; c < N_COL; c++) {
      row_sum[r] += table[r][c];
    }
  }

  for (int c = 0; c < N_COL; c++) {
    for (int r = 0; r < N_ROW; r++) {
      col_sum[c] += table[r][c];
    }
  }

  printf("Row totals: ");
  for (int i = 0; i < N_ROW; i++) {
    printf("%d ", row_sum[i]);
  }
  printf("\n");

  printf("Columns totals: ");
  for (int i = 0; i < N_COL; i++) {
    printf("%d ", col_sum[i]);
  }
  return 0;
}
