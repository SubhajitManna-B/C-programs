#include<stdio.h>
#include<conio.h>
int main()
{
    int i,c=0,n;
    printf("Enter a number for checking prime or not : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
    if(c==2)
    {
        printf("The number (%d) is prime",n);
    }
    else
    {
        printf("The number (%d) is not prime",n);
    }
    return(0);
}
