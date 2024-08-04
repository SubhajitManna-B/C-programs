// LCM of two number using while loop.

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
    if(m<n)
       m=m+a;

    else
       n=n+b;
    }
    printf("the lcm is : %d",m);
    return(0);
}
