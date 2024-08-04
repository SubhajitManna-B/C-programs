//

#include<stdio.h>
#include<conio.h>
int main()
{
    long int i,j,n,fact=1;
    printf("Enter a number for getting factorial upto this (Don't take input over 10) : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        printf("\nThe factorial of %ld is %ld",i,fact);
        fact=1;
    }
    return(0);
}
