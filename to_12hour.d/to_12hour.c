#include <stdio.h>

int main(void) {
  int h_24, h_12, min, format;


  printf("Enter a 24-hour time (hh:mm): ");
  scanf("%d:%d", &h_24, &min);
  
  h_12 = h_24 % 12;
  if (h_12 == 0){
    h_12 = 12;
    printf("Equievelant 12-hour time: %02d:%02d PM.", h_12, min);
  } else if (h_24 < 12){
      printf("Equivelant 12-hour time: %02d:%02d AM.", h_12, min);
  } else {
      printf("Equivelant 12-hour time: %02d:%02d PM.", h_12, min);
  }
  return 0;
}
