#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int num;
  struct Node *next;
} Node;

void add(int num, Node **head_ref) {
  if (*head_ref == NULL) {
    *head_ref = malloc(sizeof(Node));
    (*head_ref)->num = num;
    (*head_ref)->next = NULL;
    return;
  }

  Node *curr = *head_ref;
  while (curr->next != NULL) {
    curr = curr->next;
  }

  Node *new_node = malloc(sizeof(Node));
  new_node->num = num;
  new_node->next = NULL;
  curr->next = new_node;
}

void print_list(Node **head_ref) {
  Node *curr = *head_ref;
  while (curr != NULL) {
    printf("%d", curr->num);
    curr = curr->next;
  }
}

int delete(int num, Node **head_ref) {
  // when list empty
  if (*head_ref == NULL) {
    return 0;
  }

  Node *curr = *head_ref;
  Node *prev = NULL;

  // when num is head
  if (curr->num == num) {
    *head_ref = curr->next;
    free(curr);
    return 1;
  }

  while (curr != NULL) {
    if (curr->num == num) {
      prev->next = curr->next;
      free(curr);
      return 1;
    } else {
      prev = curr;
      curr = curr->next;
    }
  }

  // not found
  return 0;
}

int main(void) {
  Node *head = NULL;

  add(5, &head);
  add(7, &head);
  add(10, &head);

  delete(7, &head);
  print_list(&head);

  return 0;
}
