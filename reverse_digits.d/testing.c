#include <stdio.h>

int main(void){
  int n = 1235;

  printf("%d\n", n % 1000);
  printf("%d\n", n / 1000);
  printf("%d - %d", n / 100, (n / 100) % 10);
  
  return 0;
}
