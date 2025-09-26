/* Reverse digits of the entered integer */
#include <stdio.h>

int main(void) {
  int n, n_pos;


  printf("Enter an integer: ");
  scanf("%d", &n);

  n_pos = (n < 0) ? -n : n;

  if (n < 0){
    printf("-");
  }

  do {
    printf("%d", n_pos % 10);
    n_pos /= 10;
  } while (n_pos != 0);

  return 0;
}
