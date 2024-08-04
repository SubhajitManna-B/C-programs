//Write a c program to find the largest of three number using conditional operator.

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,lar1,lar2;
    printf("Enter the three numbers : \n");
    scanf("%d%d%d",&a,&b,&c);
    lar2=(a>b)?a:b;
    lar1=(lar2>c)?lar2:c;
    printf("the largest number = %d",lar1);
    return(0);
}
