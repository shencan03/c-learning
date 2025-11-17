#include <stdio.h>

int main(int argc, char *argv[]) {
  int i;

  for (i = argc - 1; 1 <= i; i--) {
    printf("%s ", argv[i]);
  }

  return 0;
}
