#include<stdio.h>

int main()
{
    int pin=1234, balance=18000, amount;
    printf("WELCOME TO THE ATM\n");
    printf("Please insert your card\nEnter your 4-digit Pin: ");
    scanf("%d",&pin);
    if(pin==1234){
    printf("Enter the amount to withdraw: ");
    scanf("%d",&amount);
    if(amount<balance){
      balance-=amount;
      printf("Your remaining balance is %d", balance);
     }
     else printf("INSUFFICIENT BALANCE");
    }
    else printf("INCORRECT PIN");
    
    return 0;
}