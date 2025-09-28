#include<stdio.h>

int main()
{
    int x=3,y=4,z=5;
    printf("LET'S EVALUATE THIS EXPRESSION STEP BY STEP\n");
    printf("x+y*z>10 && x-z<y || !(y%z)\n");
    printf("x=3 , y=4 , z=5\n");
    int a=y*z;
    printf("1. y*z=%d\n",a);
    int b=x+a;
    printf("2. x+y*z=%d\n",b);
    int c=(b>10);
    printf("3. x+y*z>10=%d\n",c);
    int d=x-z;
    printf("4. x-z=%d\n",d);
    int e=(d<y);
    printf("5. x-z<y=%d\n",e);
    int f=c&&e;
    printf("6.x+y*z>10 && x-z<y=%d",f);
    int g=y%z;
    printf("7. y%z=%d\n",g);
    int h= !(y%z);
    printf("8. !(y%z)=%d\n",h);
    int i=f||h;
    printf("Now,\n\tx+y*z>10 && x-z<y || !(y%z)=%d",i);
    
    
    return 0;
}