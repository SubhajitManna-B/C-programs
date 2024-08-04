//write a program to store the data in array

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,sum=0,n,a[20];
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            sum=sum+j;
        }
        a[i]=sum;
    }
    printf("Result = ");
    for(i=1;i<=n;i++)
    {
        printf("\t%d",a[i]);
    }
    return(0);
}
