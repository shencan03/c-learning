#include <stdio.h>

int main(void){
  int rem = 0, n1, n2, n1_pos, n2_pos;

  printf("Enter two integers saparated by space: ");
  scanf("%d %d", &n1, &n2);

  n1_pos = (n1 < 0) ? -n1 : n1;
  n2_pos = (n2 < 0) ? -n2 : n2;
  
  for (;n1_pos != 0;){
    rem = n2_pos % n1_pos;
    n2_pos = n1_pos, n1_pos = rem;
  }
  printf("Greatest common devisor: %d", n2_pos);

  return 0;
}
