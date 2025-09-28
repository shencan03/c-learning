#include <stdio.h>

int main(void) {
  int n;

  printf("This program prints a table of squares.\nEnter number of entries in table: ");
  scanf("%d", &n);
  getchar();

  for (int i = 1; i <= n; i++){
    printf("%10d%10ld\n", i, (long) i * i);
    if ((i % 24) == 0){
      printf("Press Enter to continue.. ");
      getchar();
    }
  } 

  return 0;
}
