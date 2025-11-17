#include <stdio.h>

#define NUM_MONTHS 12

int main(void) {
  char *months[NUM_MONTHS] = {"January",   "February", "March",   "April",
                              "May",       "June",     "July",    "August",
                              "September", "October",  "November"};
  int i, month, day, year;

  printf("Enter a date (mm/dd/yyyy) : ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("You entered the date %s %d, %d", months[month - 1], day, year);

  return 0;
}
