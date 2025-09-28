#include<stdio.h>
void binaryNo(int x){
 if(x>1){
   binaryNo(x/2);
 }
 printf("%d",x%2);
}
int main()
{
    int a,b;
    printf("LET'S SEE HOW BITWISE OPERATORS WORK IN C\n");
    printf("We will evaluate the expression (a&b) | (a^b)\n");
    printf("Enter a and b: ");
    scanf("%d %d",&a,&b);
    int c=a&b;
    printf("1. (a&b)= ");
    binaryNo(c);
    int d=a^b;
    printf("\n2. (a^b)= ");
    binaryNo(d);
    int e=c|d;
    printf("\n3. (a&b) | (a^b)= ");
    binaryNo(e);
    return 0;
}