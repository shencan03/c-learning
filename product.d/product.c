#include <stdio.h>

int main(void) {
  int item_number, day, month, year;
  float unit_price;

  printf("Enter item number: ");
  scanf("%d", &item_number);

  printf("Enter unit price: ");
  scanf("%f", &unit_price);

  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%d\t$%6.2f\t%-d/%-d/%-d", item_number, unit_price, month, day, year);

  return 0;
}
