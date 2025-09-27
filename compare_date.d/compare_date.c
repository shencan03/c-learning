/* This program compares dates entered by user and outputs the earliest date */
#include <stdio.h>

int main(void) {
  int month, day, year;
  int month_l, day_l, year_l;

  printf("Enter 0/0/0 to exit.\n");
  for (;;){
    printf("Enter date [XX/XX/XX]: ");
    scanf("%d/%d/%d", &month, &day, &year);
    
    month_l = (month_l < month) ? month : month_l;
    day_l = (day_l < day) ? day : day_l;
    year_l = (year_l < year) ? year : year_l;

    if ((month == 0) && (day == 0) && (year == 0)){
      printf("%d/%02d/%02d is the earliest date", month_l, day_l, year_l);
      return 0;
    }
  }
}
