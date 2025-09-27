/* Outputs all even squares up to number entered */
#include <stdio.h>

int main(void){
  int n_pos = 1, n;

  printf("Enter a number: ");
  scanf("%d", &n);

  n_pos = (n > 0) ? n : -n;

  for (int i = 2; (i * i) <= n_pos; i += 2){
    printf("%d\n", i * i);
  }

  return 0;
}
