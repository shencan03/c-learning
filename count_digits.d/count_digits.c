#include <stdio.h>

int main(void) {
  int num, num_converted;

  printf("Enter a number: ");
  scanf("%d", &num);

  num_converted = (num < 0) ? -num : num;

  if (num_converted <= 9)
    printf("The number %d has 1 digit", num);
  else if (num_converted <= 99)
    printf("The number %d has 2 digits", num);
  else if (num_converted <= 999)
    printf("The number %d has 3 digits", num);
  else if (num_converted <= 9999)
    printf("The number %d has 4 digits", num);
  else
    printf("Illegal number");

  return 0;
}
