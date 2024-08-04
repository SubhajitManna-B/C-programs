//write a c program to calculate the sum of n not prime number.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1,j,count,c=0,s=0;
    printf("Enter the number of not prime number required : ");
    scanf("%d",&n);
    printf("\nFirst %d prime number are :\n ",n);
    for(count=1;count<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
              c=c+1;
            }
        }
            if(c!=2)
            {
            printf(" %d ",i);
            s=s+i;
            count++;
            }
    c=0;
    }
    printf("\n\nThe sum of first %d not prime number is : %d",n,s);
    return(0);
}
