//write a program to print the integer and his first three powers.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    printf("the integer is: %d",n);
    printf("\nthe powers of the integer is: %d %d %d",n,n*n,n*n*n);
    getch();
    return(0);
}



