#include <stdio.h>

int main(void) {
  int day, month, year, date_formatted;

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("You entered %d%02d%02d", year, month, day);

  return 0;
}
