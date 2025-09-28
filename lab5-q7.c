#include<stdio.h>
int main(){
 int attendance;
 char ans;
 printf("Enter your attendance percentage ");
 scanf("%d", &attendance);
 if(attendance>=75){
 printf("Have you cleared your Mid Term exams ");
 scanf(" %c", &ans);
 if(ans=='P'){
 printf("Have you paid the exam fee? ");
 scanf(" %c", &ans);
 if(ans=='Y')
 {
 printf("YOU'RE ELIGIBLE FOR FINAL EXAMS");
 }
 else printf("YOU'RE NOT ELIGIBLE");
 }
 else
 printf("YOU'RE NOT ELIGIBLE");
 }
 else
 printf("YOU'RE NOT ELIGIBLE");
return 0;
}
    