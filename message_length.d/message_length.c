/* This program outputs length of message entered by user. */
#include <stdio.h>

int main(void){
  int sum = 0;

  printf("Enter a message: ");

  for(;getchar() != '\n';){
    sum += 1;
  }

  printf("The message is %d characters long.", sum);

  return 0;
}
