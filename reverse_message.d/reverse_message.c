#include <stdio.h>

#define LENGTH 100

char *read_message(char *a);
void print_message_reversed(char *a, char *p);

int main(void) {
  char a[LENGTH];
  char *p;

  p = read_message(a);
  print_message_reversed(a, p);

  return 0;
}

char *read_message(char *a) {
  char ch;
  char *p = a;

  printf("Enter message to be reversed: ");
  for (; ((ch = getchar()) != '\n') && p < a + LENGTH;) {
    *p++ = ch;
  }

  return p;
}

void print_message_reversed(char *a, char *p) {
  printf("\nMessage you entered reversed: ");
  for (p--; p >= a; p--) {
    printf("%c", *p);
  }
}
