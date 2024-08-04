//write a c program to find prime number upto n.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,c=0;
    printf("Enter the ending number : ");
    scanf("%d",&n);
    printf("The prime numbers are : ");
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=(i/2);j++)
        {
            if(i%j==0)
            {
              c=c+1;
            }
        }
            if(c==0)
            {
            printf("\t%d",i);
            }
    c=0;
    }
    return(0);
}

