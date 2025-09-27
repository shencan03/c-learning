/* Outputs calendar given user input */
#include <stdio.h>

int main(void){
  int n_days, start_week;

  printf("Enter number of days in month: ");
  scanf("%d", &n_days);

  printf("Enter starting day of the week (1=Mon, 7=Sun): ");
  scanf("%d", &start_week);

  printf("%*s", 4 * (start_week - 1), "");

  for (int i = )
  return 0;
}
