//write a c program to check the date validation using if-else statement.

#include<stdio.h>
#include<conio.h>
int main()
{
    int d,m,y;
    printf("\n enter the day : ");
    scanf("%d",&d);
    printf("\nenter the month : ");
    scanf("%d",&m);
    printf("\nenter the year : ");
    scanf("%d",&y);
    if((d>0 && d<33) && (m>0 && m<13) && (y>1600 && y<2101))
    {
        printf("The date %d/%d/%d is valid",d,m,y);
    }
    else
    {
        printf("The date %d/%d/%d is unvalid",d,m,y);
    }
    return(0);

}


