#include <stdio.h>

int main(void){
  int i, s, l, f, d, ld;

  i = sizeof(int); s = sizeof(short); l = sizeof(long); f = sizeof(float); d = sizeof(double); ld = sizeof(long double);

  printf("int: %d short: %d long: %d float: %d double: %d long double: %d", i, s, l, f, d, ld);
  return 0;
}
