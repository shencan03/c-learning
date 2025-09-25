#include <stdio.h>

int main(void) {
  float value, comission;

  printf("%-20s %s\n", "transaction size", "commission rate");
  printf("%-20s %s\n", "under $2,500",     "$30 + 1.7%");
  printf("%-20s %s\n", "$2,500-$6,250",    "$56 + 0.66%");
  printf("%-20s %s\n", "$6,250-$20,000",   "$76 + 0.34%");
  printf("%-20s %s\n", "$20,000-$50,000",  "$100 + 0.22%");
  printf("%-20s %s\n", "$50,000-$500,000", "$255 + 0.09%");
  
  printf("Enter value of trade: ");
  scanf("%f", &value);

  if (value < 2500.00f){
    comission = 30.00f + value * 0.017f;
  } else if (value < 6250.00f){
    comission = 56.00f + value * 0.0066f;
  } else if (value < 20000.00f){
    comission = 76.00f + value * 0.0034f;
  } else if (value < 50000.00f){
    comission = 100.00f + value * 0.0022f;
  } else if(value < 500000){
    comission = 155.00f + value * 0.0011f;
  } else{
    comission = 255.00f + value * 0.0009f;
  }

  printf("Comission: $%.2f", comission);

  return 0;
}
