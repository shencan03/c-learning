#include <stdio.h>

int main(void) {
  int n1, n2, n3, n4, largest, smallest;

  printf("Enter four numbers saparated with single space: ");
  scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

  largest = smallest = n1;

  if (n1 > n2){
    largest = n1;
    smallest = n2;
  } else {
      largest = n2;
      smallest = n1;
  }

  int largest2, smallest2;
  if (n3 > n4) {
    largest2 = n3;
    smallest2 = n4;
  } else {
      largest2 = n4;
      smallest2 = n3;
  }
  if (largest < largest2) {
    largest = largest2;
  }

  if (smallest > smallest2) {
    smallest = smallest2;
  }

  printf("Largest: %d\nSmallest: %d", largest, smallest);

  return 0;

}
