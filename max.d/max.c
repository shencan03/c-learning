#include <stdio.h>

int *max(int *a, int *b);

int main(void) {
  int a, b;

  printf("Enter two numbers: ");
  scanf("%d\n%d", &a, &b);

  printf("Bigger one is %d", *max(&a, &b));
  return 0;
}

int *max(int *a, int *b) {
  if (*a > *b) {
    return a;
  } else if (*a < *b) {
    return b;
  }
}
