#include <stdbool.h>
#include <stdio.h>

#define LENGTH 100

char *read_message(char *a);
bool check_palindrome(char *a, char *p);

int main(void) {
  char a[LENGTH];
  char *p;

  p = read_message(a);
  if (check_palindrome(a, p))
    printf("Palindrome");
  else
    printf("Not Palindrome");
  return 0;
}

char *read_message(char *a) {
  char ch;
  char *p;
  p = a;

  printf("Enter message: ");
  for (; (ch = getchar()) != '\n' && p < a + LENGTH;) {
    if (ch >= 'A' && ch <= 'Z')
      ch += 32;
    if (ch >= 'a' && ch <= 'z')
      *p++ = ch;
  }

  return p;
}

bool check_palindrome(char *a, char *p) {
  bool is_palindrome;
  char *start;
  start = a;
  is_palindrome = true;

  for (--p; p >= start; p--, start++) {
    if (*start != *p)
      is_palindrome = false;
  }

  return is_palindrome;
}
