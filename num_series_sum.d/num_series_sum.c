#include <stdio.h>

int main(void) {
  int n, sum;

  printf("This program sums the series of integers saparated by single spaces (enter 0 to terminate): ");

  scanf("%d", &n);
  while (n != 0){
    sum += n;
    scanf("%d", &n);
  } 
  printf("The sum is: %d", sum);

  return 0;

}
