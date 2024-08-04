#include<stdio.h>
#include<conio.h>
int main()
{
    start:
    int n,r,temp,sum=0;
    printf("\nEnter the number : ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("The number is pallindrome");
    }
    else
    {
        printf("\nThe number is not pallindrome");
        printf(" (Re-enter the number)\n");
        goto start;
    }
}
