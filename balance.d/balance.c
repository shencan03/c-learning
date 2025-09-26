#include <stdio.h>

int main(void){
  float balance = 0.0f, debit, credit;
  int cmd;

  printf("*** ACME checkbook-balancing program *** \nCommands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n");

  for (;;){
    printf("Enter command: ");
    scanf("%d", &cmd);

    switch (cmd) {
      case 0: balance = 0; break;
      case 1: printf("Enter amount to credit: "); scanf("%f", &credit); balance += credit; break;
      case 2: printf("Enter amount to debit: "); scanf("%f", &debit); balance -= debit; break;
      case 3: printf("Your balance is: %.2f\n", balance); break;
      case 4: return 0;
      default: printf("Enter command: "); scanf("%d", cmd);
    }
  
  }
  
  return 0;
}
