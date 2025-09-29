#include <stdio.h>
#include <ctype.h>

int main(void){
  int hour, minute, suffix;
  printf("Enter a 12-hour time: ");
  scanf("%d:%d", &hour, &minute);
  
  for (;;){
    suffix = toupper(getchar());
    /* A == 65 in ascii */
    if (suffix == 65){ 
      printf("Equivelant 24-hour time: %02d:%02d", hour, minute);
      return 0;
    }else if (suffix == 80){
      if (hour == 12){
        printf("Equivelant 24-hour time: %02d:%02d", 0, minute);
        return 0;
      } else{
        printf("Equivelant 24-hour time: %02d:%02d", hour + 12, minute);
        return 0;
      }
    }
  }
}
