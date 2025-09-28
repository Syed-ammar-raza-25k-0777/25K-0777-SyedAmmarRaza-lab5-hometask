#include<stdio.h>

int main()
{
    char signal;
    int time;
    printf("Enter the traffic signal color: ");
    scanf(" %c", &signal);
    printf("Enter the time in 24-hour format e.g(2300)");
    scanf("%d",&time);
    if(signal=='R'&& time<2200){
     printf("Stop and wait");
    }
    else if(signal=='R'&& time>=2200){
     printf("Stop but night caution allowed");
    }
    else if (signal=='Y'){
     printf("Get ready");
    }
    else if (signal=='G'){
     printf("Go");
    }
    else printf("INVALID SIGNAL");
    
    return 0;
}