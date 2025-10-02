#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void){
  int num_cards, rank, suit;
  bool in_hand [NUM_SUITS] [NUM_RANKS] = {0};

  const char rank_code [] = {'2', '3', '4', '5', '6', '7', '8', '9',
                              'a', 't', 'j', 'k'};
  const char suit_code [] = {'h', 'd', 'c', 's'};

  srand((unsigned) time(NULL));

  printf("Enter number of cards in hand: ");
  scanf("%d", &num_cards);

  printf("Your hand:");
  while (num_cards > 0){
    rank = rand() % NUM_RANKS;
    suit = rand() % NUM_SUITS;

    if (!in_hand[suit][rank]){
      in_hand[suit][rank] = 1;
      num_cards--;
      printf(" %c%c", rank_code[rank], suit_code[suit]);
    }
  }

  return 0;
}
