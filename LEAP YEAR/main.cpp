// Check the year is leap or not.

#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("\n enter the year : ");
    scanf("%d",&year);
    if(year%400==0 || year%100!=0 && year%4==0)
        printf("the year %d is leap year",year);
    else
        printf("Result : the year %d is not leap year",year);
    return(0);
}
