//write a c program to print the digit of a number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r;
    printf("enter the number  ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        printf("the digit is %d\n",r);
        n=n/10;
    }
    getch();
    return(0);
}
