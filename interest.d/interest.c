#include <stdio.h>
#define NUM_RATES (int) (sizeof(values) / sizeof(values[0]))
#define INITIAL 100

int main(void){
  int low_rate;
  double values[5];
  int num_years;

  printf("Enter interest rate: ");
  scanf("%d", &low_rate);

  printf("Enter years: ");
  scanf("%d", &num_years);

  printf("Years");
  for (int i = 0;  i < NUM_RATES; i++){
    printf("%6d%%", low_rate + i);
    values[i] = INITIAL;
  }

  printf("\n");
  for (int year = 1; year <= num_years; year++){
    printf("%3d    ", year);
    for (int i = 0; i < NUM_RATES; i++){
      values[i] += (low_rate + i) / 100.0 * values[i];
      printf("%7.2lf", values[i]);
    }
    printf("\n");
  }
  return 0;
}
