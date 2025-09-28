#include<stdio.h>
int main(){
 int marks1,marks2,marks3,highest;
 printf("Enter the marks of first student ");
 scanf("%d", &marks1);
 printf("Enter the marks of second student ");
 scanf("%d", &marks2);
 printf("Enter the marks of third student ");
 scanf("%d", &marks3);
 (marks1>marks2 && marks1>marks3)?
   printf("First student has highest marks = %d ",marks1):
   (marks2>marks3 && marks2>marks1)?
   printf("Second student has highest marks = %d ",marks2):
   printf("Third student has highest marks = %d ",marks3);
return 0;
}
    