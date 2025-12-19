#include <stdio.h>
#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
  int number;
  char name[NAME_LEN + 1];
  int on_hand;
} inventory[MAX_PARTS];

int num_parts = 0;


int find_part(int number);
void insert(void);
void search(void);
void change_quantity(void);

int main(void){
  char code;

  for(;;){
    printf("Enter operation code: ");
    scanf(" %c", &code);

    switch(code){
      case 'i': insert(); break;
      case 's': search(); break;
      case 'c': change_quantity(); break;
      case 'q': return 0;

      default: printf("Illegal code\n");
    }

    printf("\n");

   }

  return 0;
}


int find_part(int number){
  int i;

  for(i = 0; i < MAX_PARTS; i++){
    if(inventory[i].number == number){
      return i;
    }
  }

  return -1;
}

void insert(void){
  if(num_parts == MAX_PARTS){
    printf("Inventory is full\n");
    return;
  }

  int number;

  printf("Enter part number: ");
  scanf(" %d", &number);

  if(find_part(number) >= 0){
    printf("Part already in inventory");
  } else {
      inventory[num_parts].number = number;
      printf("Enter part name: ");
      read_line(inventory[num_parts].name, NAME_LEN);     
      printf("Enter quantity on hand: ");
      scanf("%d", &inventory[num_parts].on_hand);
      num_parts++;
  }
}

void search(void){
  int number;
  printf("Enter part number: ");
  scanf("%d", &number);
  if((number = find_part(number)) >= 0){
    printf("\tPart name\tQuantity on hand\n\t%s\t%d\n", inventory[number].name, inventory[number].on_hand);
  } else {
    printf("Part not found in inventory\n");
  }
}

void change_quantity(void){
  int number;
  int change;

  printf("Enter part number: ");
  scanf("%d", &number);

  if((number = find_part(number)) >= 0){
    printf("Enter change in quantity: ");
    scanf("%d", &change);

    inventory[number].on_hand += change;
  } else {
      printf("Part not found in inventory\n");
  }
}
