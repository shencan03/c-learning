#include <stdio.h>

#define PI 3.14159f
#define VOLUME_CONSTANT (4.0f / 3.0f)

int main(void){
  float radius, volume;

  printf("Enter radius of sphere: ");
  scanf("%f", &radius);

  volume = VOLUME_CONSTANT * PI * radius * radius * radius;

  printf("Volume of sphere with radius %.2f: %.2f", radius, volume);

  return 0;
}
