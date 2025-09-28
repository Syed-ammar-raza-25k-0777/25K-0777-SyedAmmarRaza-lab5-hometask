#include<stdio.h>
int main(){
 char ans, size, type;
 int no, total, ans1;
 printf("Welcome to the automate ordering process\n");
 printf("Enter B for Burger Hub, I for Icecream Parlor or C for Coffee shop ");
 scanf(" %c", &ans);
 if(ans=='B' || ans== 'I')
 {
  printf("Your order will be handled by your chosen section");
 }
 else if(ans=='C')
 {
  printf("Choose the size for your coffee...?\n");
  printf("S for Rs120 \n M for Rs200 \n L for Rs350 ");
  scanf(" %c", &size);
  printf("How many coffee do you want? ");
  scanf(" %c", &no);
  if(size=='S' && no>1){
    printf("check out our combo offers \n");
    printf("1. Buy 3 Small cups of coffee for just Rs 300\n");
    printf("2. Buy 5 Small cups of coffee for just Rs 550\n");
    printf("Enter 0 to reject offer");
    scanf("%d",&ans1);
    if(ans1==1){
    total=300;
    }
    else if(ans1==2) 
    {
    total=550;
    }
    else if(ans1==0) 
    {total=120*no;
    }
    else{
     printf("INVALID ENTRY");
    }
  }
  else if(size=='S' && no==1){
    total=120;
  }
  else if(size=='M' && no>1){
    printf("check out our combo offers \n");
    printf("1. Buy 3 Medium cups of coffee for just Rs 500\n");
    printf("2. Buy 5 Medium cups of coffee for just Rs 900\n");
    printf("Enter 0 to reject offer");
    scanf(" %d", &ans1);
    if(ans1==1) total=500;
    else if(ans1==2) total==900;
    else if(ans1==0) total=200*no;
    else printf("INVALID ENTRY");
  }
  else if(size=='M' && no==1){
    total=200;
  }
  else if(size=='L' && no>1){
    printf("check out our combo offers \n");
    printf("1. Buy 3 Large cups of coffee for just Rs 1000\n");
    printf("2. Buy 5 large cups of coffee for just Rs 1600\n");
    printf("Enter 0 to reject offer");
    scanf(" %d", &ans1);
    if(ans1==1) total=1000;
    else if(ans1==2) total==1600;
    else if(ans1==0) total=350*no;
    else printf("INVALID ENTRY");
  }
  else if(size=='L' && no==1){
    total=350;
  }
 else printf("INVALID SIZE\n");
 }
  printf("Please give me the type of coffee (Regular(r), Cappuccino(c), Latte(l))\n ");
  printf("No chargers for Regular \n Rs100 For cappuccino and Latte");
  scanf(" %c", &type);
  if(type=='R'){
  total=total;
  }
  else if(type=='c' || type=='l')
  {
  total+=100;
  }
  else {printf("INVALID ENTRY");}
  printf("YOUR FINAL BILL IS %d ", total);
return 0;
}
    