//Write a program to find the factorial of a number using for loop.

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,fact=1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is: %d",n,fact);
    return(0);
}
