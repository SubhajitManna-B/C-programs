//write a c program to count the digit of the number using while loop.

#include <stdio.h>
#include <conio.h>
int main()
{
    int n,r,co=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0)
    {
    co++;
    r=n%10;
    n=n/10;
    }
    printf("%d",co);
    getch();
    return(0);
}

