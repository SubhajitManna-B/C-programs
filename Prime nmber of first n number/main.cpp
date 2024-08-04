//Prime number of first n number

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,c=0,count,p=2;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("The first %d prime number is : ",n);
    }
    else
    {
       printf("The first %d prime number are : ",n);
    }
    for(count=1;count<=n;p++)
    {
        for(i=1;i<=p;i++)
        {
            if(p%i==0)
            {
                c=c+1;
            }
        }
        if(c==2)
        {
            printf(" %d ",p);
            count++;
        }
        c=0;
    }
    return(0);
}
