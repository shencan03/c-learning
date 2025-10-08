#include <stdio.h>

void decompose(double x, long *int_part, double *frac_part) {
  *int_part = (long)x;
  *frac_part = x - *int_part;
}

int main(void) {
  long i;
  double frac;

  decompose(3.15, &i, &frac);

  printf("whole part(i): %ld, frac part(frac): %lf", i, frac);

  return 0;
}
