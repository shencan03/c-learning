#include <stdio.h>
#include <ctype.h>

int main(void){
  int c, count = 0;

  printf("Enter a sentence ending with a period: ");

  for (;;){
    c = toupper(getchar());
    if ((c == 65) || (c == 69) || (c == 73) || (c == 79) || (c == 85)){
     count++; 
    } else if (c == 46){
      printf("Your sentence has %d vowels.", count);
      return 0;
    }
  }
}
