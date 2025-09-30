#include <stdio.h>
#include <stdbool.h>

int main(void){
  long n;
  int i[10] = {false};
  int digit;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0){
    digit = n % 10;
    if (i[digit] == 1){
      break;
    }
    i[digit] = true;
    n /= 10;
  }

  if (n > 0){
    printf("Repeated digit");
  } else {
    printf("No repeated digit");
  }
  
  return 0;
}
