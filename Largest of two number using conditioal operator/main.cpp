//Write a c program to find the largest of two number.

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,lar;
    printf("Enter the two numbers : \n");
    scanf("%d%d",&a,&b);
    lar=(a>b)?a:b;
    printf("the largest number = %d",lar);
    return(0);
}
