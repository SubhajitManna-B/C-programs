//Sereise of 1/1!+1/2!+1/3!+1/4!+......+1/n!


#include <stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,fact;
    float s=0.0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=i;+j++)
        {
            fact=fact*j;
        }
        s=s+(1.0/fact);
    }
    printf("The result is : %f",s);
    return(0);
}
