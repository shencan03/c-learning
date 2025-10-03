#include <stdio.h>

int main(void) {
  long digits[10] = {0};
  int digit;
  printf("Enter numbers saparated by single space (enter 0 in the end): ");

  long num;
  for (;;) {
    scanf("%ld", &num);
    if (num == 0) {
      return 0;
    }

    printf("\nNumber %ld\n", num);
    for (; num != 0;) {
      digit = num % 10;
      num /= 10;
      digits[digit]++;
    }

    printf("Digits: %3c", ' ');
    for (int i = 0; i < 10; i++) {
      printf("%3d", i);
    }

    printf("\nOccurences:");
    for (int i = 0; i < 10; i++) {
      printf("%3ld", digits[i]);
      digits[i] = 0;
    }

    printf("\n");
  }

  return 0;
}
