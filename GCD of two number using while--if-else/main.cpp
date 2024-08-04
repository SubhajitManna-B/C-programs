// GCD of two number using while loop.

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,gcd,m,n;
    printf("enter two number a,b\n");
    scanf("%d%d",&a,&b);
    m=a;
    n=b;
    while(m!=n)
    {
        if(m>n)
        {
            m=m-n;
        }
        else
        {
            n=n-m;
        }
    }
         printf("the gcd is : %d",m);
    return(0);
}
