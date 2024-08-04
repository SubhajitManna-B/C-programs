//Sereise of 1!+2!+3!+4!+....+n!


#include <stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,fact,s=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=i;+j++)
        {
            fact=fact*j;
        }
        s=s+fact;
    }
    printf("The result is : %d",s);
    return(0);
}
