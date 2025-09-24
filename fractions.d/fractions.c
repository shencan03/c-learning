#include <stdio.h>

int main(void) {
  int num1, denom1, num2, denom2, result_num, result_denom;

  printf("Enter first fraction: ");
  scanf("%d/%d", &num1, &denom1);

  printf("Enter second fraction: ");
  scanf("%d/%d", &num2, &denom2);

  result_num = denom1 * num2 + denom2 * num1;
  result_denom = denom1 * denom2;

  printf("Result is: %d/%d", result_num, result_denom);

  return 0;

}

