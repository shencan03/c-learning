#include <stdio.h>
#include <string.h>

#define NUM_CHARS 20

void read_line(char a[]);

int main(void) {
  char smallest_word[NUM_CHARS], largest_word[NUM_CHARS], curr_word[NUM_CHARS];

  printf("Enter word: ");
  read_line(curr_word);
  strcpy(smallest_word, curr_word);
  strcpy(largest_word, curr_word);

  for (;;) {
    printf("Enter word: ");
    read_line(curr_word);
    if (strlen(curr_word) == 4) {
      break;
    }
    if (strcmp(smallest_word, curr_word) > 0) {
      strcpy(smallest_word, curr_word);
    } else if (strcmp(largest_word, curr_word) < 0) {
      strcpy(largest_word, curr_word);
    }
  }

  printf("Smallest word: %s\nLargest word: %s", smallest_word, largest_word);

  return 0;
}

void read_line(char a[]) {
  int ch, i;

  for (i = 0; (ch = getchar()) != '\n' && i < NUM_CHARS - 1;) {
    a[i++] = ch;
  }

  a[i] = '\0';
}
