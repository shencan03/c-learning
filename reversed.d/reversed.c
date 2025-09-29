#include <stdio.h>
#include <ctype.h>

int main(void){
  int initial, c; 

  printf("Enter a first name and a last name: ");

  for (;;){
    initial = getchar();
    if (initial != 32){
      break;
    }
  }

  for (;;){
    c = getchar();
    if (c == 32){
      for (;;){
        c = getchar();
        
        switch (c){
          case 32:
            break;
          case 10:
            printf(", %c.", initial);
            return 0;
          default:
            putchar(c);
            break;
        }
      }
    }
  }
}
