//write a c program to convert the seconds in hour,minute,seconds.

#include<stdio.h>
#include<conio.h>
int main()
{
    int time,hour,minute,second;
    printf("enter the time in seconds ");
    scanf("%d",&second);
    hour=second/3600;
    time=second%3600;
    minute=time/60;
    second=time%60;
    printf("the time is %d hour, %d minute, %d second",hour,minute,second);
    getch();
    return(0);
}
