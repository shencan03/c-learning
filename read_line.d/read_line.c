#include <stdio.h>

#define LENGTH 5

int read_line(char str[], int n);

int main(void) {
  char str[LENGTH + 1];
  int len, i;

  printf("Enter 'naber': ");
  len = read_line(str, len);

  for (i = 0; i < LENGTH; i++) {
    printf("%c", str[i]);
  }

  printf("\nLength of text: %d", i);
  return 0;
}

int read_line(char str[], int n) {
  int ch, i = 0;

  for (; (ch = getchar()) != '\n';) {
    str[i++] = ch;
  }

  str[i] = '\0';

  return i;
}
