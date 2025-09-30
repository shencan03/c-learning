#include <stdio.h>
#define N 10

int main(){
  int i[N];
  printf("Enter 10 numbers saparated by space: ");
  
  for (int k = 0; k < N; k++){
    scanf("%d", &i[k]);  
  }

  for (int k = N - 1; 0 <= k; k--){
    printf("%d ", i[k]);
  }
  return 0;
}
