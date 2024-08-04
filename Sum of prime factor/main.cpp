#include<stdio.h>
#include<conio.h>
int main ()
{
    int n,i,j,c=0,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c=c+1;
            }
        }
        if(c==2)
        {
            sum=sum+i;
        }
    }
    c=0;
   }
 printf("The sum of prime factor is : %d",sum);
}
