#include <stdio.h>

int main(void) {
  int n, i;

  printf("This program prints a table of squares.\nEnter number of entries in table: ");
  scanf("%d", &n);

  i = 1;
  while (n >= i){
    printf("%10d%10d\n", i, i * i);
    i++;
  }
    
  return 0;
}
