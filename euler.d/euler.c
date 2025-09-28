/* This program outputs constant e (euler) up to number entered by user as infinite series. */
#include <stdio.h>

int main(void) {
  float sum = 0.00f;
  int n, denom;

  printf("Enter n where n is denominator up to which euler series summation end: ");
  scanf("%d", &n);

  for (int i = 0; i <= n; i++){
    denom = 1;
    for (int k = 1; k <= i; k++){
      denom *= k;
    }
    sum += 1.00f / denom;
  }
  printf("Result: %f", sum);
  
  return 0;
}
