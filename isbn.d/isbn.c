#include <stdio.h>

int main(void) {
  int prefix, group, publisher, title, check;

  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &prefix, &group, &publisher, &title, &check);

  printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d", prefix, group, publisher, title, check);

  return 0;
}
