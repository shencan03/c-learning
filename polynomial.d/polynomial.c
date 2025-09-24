#include <stdio.h>

int main(void) {
  float x, result;
  
  printf("Enter value x for following function 3x**5 + 2x**4 - 5x**3 - x**2 + 7x - 6: ");
  scanf("%f", &x);

  result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

  printf("Result is: %.2f", result);

  return 0;
}
