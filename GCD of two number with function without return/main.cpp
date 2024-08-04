//GCD of two number with function without return.

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    int gcd(int a,int b);
    printf("enter the two numbers : \n");
    scanf("%d%d",&a,&b);
    gcd(a,b);
    return(0);
}

int gcd(int a,int b)
{
    int m,n;
    m=a;
    n=b;
    while(m!=n)
    {
        if(m>n)
            m=m-n;
        else
            n=n-m;
    }
    printf("the gcd is : %d",m);
}
