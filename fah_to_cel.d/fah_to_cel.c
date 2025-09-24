#include <stdio.h>
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {
  float celcius, fahrenheit;
  
  printf("Enter Fahrenheit degrees: ");
  scanf("%f", &fahrenheit);

  celcius = (fahrenheit - 32.0f) * SCALE_FACTOR;
  printf("Result: %.2f", celcius);

  return 0;
  
}
