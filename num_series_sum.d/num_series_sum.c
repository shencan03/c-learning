#include <stdio.h>

int main(void) {
  double n, sum;

  printf("This program sums the series of double values saparated by single spaces (enter 0 to terminate): ");

  scanf("%lf", &n);
  while (n != 0){
    sum += n;
    scanf("%lf", &n);
  } 
  printf("The sum is: %lf", sum);

  return 0;

}
