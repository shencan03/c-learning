#include <stdio.h>

int main(void) {
  int first3, second3, third4;

  printf("Enter phone number [(xxx) xxx-xxxx] : ");
  scanf("(%d)%d-%d", &first3, &second3, &third4);

  printf("You entered %d.%d.%d", first3, second3, third4);

  return 0;

}
