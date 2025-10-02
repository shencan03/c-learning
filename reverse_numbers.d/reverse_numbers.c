#include <stdio.h>

int main(){
  int n;

  int a [n];
  
  printf("How many numbers do you want to reverse: ");
  scanf("%d", &n);

  printf("Enter %d numbers (saparated by single spaces): ", n);
  for (int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }

  printf("Numbers reversed:");
  for (int i = n - 1; 0 <= i; i--){
    printf(" %d", a[i]);
  }

  return 0;
}
