#include <stdio.h>
#define TAX_RATE 0.05f

int main(void){
  float amount_raw, amount_w_tax;

  printf("Enter an amount: ");
  scanf("%f", &amount_raw);

  amount_w_tax = amount_raw + amount_raw * TAX_RATE;

  printf("With tax: %.2f", amount_w_tax);
  
  return 0;
}
