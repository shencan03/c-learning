#include <stdio.h>

int main(void){
  long num;
  int digits[10] = {0};
  int digit;

  printf("Enter a number: ");
  scanf("%ld", &num);

  digit = num % 10;
  while (num != 0){
    digits[digit]++;
    num /= 10;
    digit = num % 10;
  }

  printf("Digit:");
  printf("%6c", ' ');
  for (int i = 0; i < (unsigned) (sizeof(digits) / sizeof(digits[0])); i++){
      printf("%3d", i);
    }

  printf("\nOccurences: ");
  for (int i = 0; i < (unsigned) (sizeof(digits) / sizeof(digits[0])); i++){
      printf("%3ld", digits[i]);
    }

  return 0;
}