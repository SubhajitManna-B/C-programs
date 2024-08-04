// WRITE A C PROGRAM TO CALCULATE THE GRTEAT COMMON DIVISER (G.C.D)OF TWO NUMBER USING FOR LOOP.

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,i,gcd;
    printf("enter the two number : ",a,b);
    scanf("%d%d",&a,&b);
    for(i=1;i<=a&&i<=b;++i)
    {
        if(a%i==0&&b%i==0)
           gcd=i;
    }
        printf("gcd of %d and %d is %d",a,b,gcd);
        return(0);
}

