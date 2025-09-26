#include <stdio.h>

int main(void) {
  float largest, n;

  printf("This program outputs largest number entered (enter 0 to exit).\n");

  printf("Enter a number: ");
  scanf("%f", &n); largest = n;

  if (n == 0){
    printf("The largest number entered was %.2f", n);
    return 0;
  }

  for (;;){
    printf("Enter a number: ");
    scanf("%f", &n);
    if (n == 0) {
      printf("The largest number entered was %.2f", largest);
      return 0;
    } else if (n > largest)
      largest = n; 
  }
}
