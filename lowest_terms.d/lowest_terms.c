#include <stdio.h>

int main(void) {
  int num, denom, num_org, denom_org, rem;

  printf("Enter a fraction with '/' in between the numbers: ");
  scanf("%d/%d", &num, &denom);

  num_org = num, denom_org = denom;

  for (;num != 0;){
    rem = denom % num;
    denom = num;
    num = rem;
  }

  printf("In lowest terms: %d/%d", num_org / denom, denom_org / denom);

  return 0;
}
