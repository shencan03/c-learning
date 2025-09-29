#include <stdio.h>

int main(void) {
  int operator, num1, denom1, num2, denom2, result_num, result_denom;

  printf("Enter first fraction: ");
  scanf("%d/%d", &num1, &denom1);
  getchar();

  printf("Enter operator (*,/,+,-): ");
  operator = getchar();

  printf("Enter second fraction: ");
  scanf("%d/%d", &num2, &denom2);

  switch (operator){
    case '+':
      result_num = denom1 * num2 + denom2 * num1;
      result_denom = denom1 * denom2;
      break;
    case '-':
      result_num = num1 * denom2 - num2 * denom1;
      result_denom = denom1 * denom2;
      break;
    case '*':
      result_num = num1 * num2;
      result_denom = denom1 * denom2;
      break;
    case '/':
      result_num = num1 * denom2;
      result_denom = denom1 * num2;
      break;
      
  }

  printf("Result is: %d/%d", result_num, result_denom);

  return 0;

}

