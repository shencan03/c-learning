#include <stdio.h>
#define N 10

void min_max(int i[], int *smallest, int *largest);

int main(void) {
  int i[N], smallest, largest;

  printf("Enter %d numbers saparated by single spaces: ", N);
  for (int x = 0; x < N; x++) {
    scanf("%d", &i[x]);
  }

  min_max(i, &smallest, &largest);

  printf("Smallest: %d\nLargest: %d", smallest, largest);

  return 0;
}

void min_max(int i[], int *smallest, int *largest) {
  *smallest = i[0], *largest = i[0];

  for (int x = 1; x < N; x++) {
    if (i[x] > *largest) {
      *largest = i[x];
      continue;
    }
    if (i[x] < *smallest) {
      *smallest = i[x];
    }
  }
}
