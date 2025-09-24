#include <stdio.h>
#define INCHES_PER_POUND 166

int main(void) {
  int volume, height, length, width, weight;
  printf("Enter height: ");
  scanf("%d", &height);

  printf("Enter length: ");
  scanf("%d", &length);

  printf("Enter width: ");
  scanf("%d", &width);

  volume = height * length * width; 
  printf("Volume is: %d\n", volume); 
  
  weight = (volume + INCHES_PER_POUND) / 166;
  printf("Dimensional weight (pounds) is: %d", weight);
  return 0;
}
