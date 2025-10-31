#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 10

int stack[STACK_SIZE];
int top = 0;

void push(char num);
char pop(void);
bool is_empty(void);
bool is_full(void);
void make_empty(void);
void stack_overflow(void);
void read_input(void);

int main(void) {
  for (;;) {
    read_input();
    printf("Nested properly.\n\n");
  }
  return 0;
}

void push(char num) {
  if (is_full()) {
    stack_overflow();
  } else {
    stack[top++] = num;
  }
}

char pop(void) {
  if (is_empty()) {
    stack_overflow();
  } else {
    return stack[--top];
  }
}

bool is_empty(void) { return top == 0; }

bool is_full(void) { return top == STACK_SIZE - 1; }

void make_empty(void) { top = 0; }

void stack_overflow(void) {
  printf("Stack overflow!");
  exit(EXIT_FAILURE);
}

void read_input(void) {
  char ch;
  printf("Enter parantheses and/or curly braces: ");

  while ((ch = getchar()) != '\n') {
    if (ch == '{' || ch == '[') {
      push(ch);
    } else {
      if (ch == '}' && pop() == '{') {
        continue;
      } else if (ch == ']' && pop() == '[') {
        continue;
      } else {
        printf("Illegally nested.");
        exit(EXIT_FAILURE);
      }
    }
  }
}
