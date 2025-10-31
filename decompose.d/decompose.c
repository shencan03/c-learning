#include <stdio.h>

void decompose(double x, int *int_part, double *frac_part);

int main(void) {
  int int_part;
  double frac;

  decompose(3.14342342, &int_part, &frac);

  printf("integer part: %d\nfraction part: %lf", int_part, frac);

  return 0;
}

void decompose(double x, int *int_part, double *frac_part) {
  *int_part = (long)x;
  *frac_part = x - *int_part;
}
