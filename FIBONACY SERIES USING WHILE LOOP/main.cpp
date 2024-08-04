// write a c program to print the fibonacy series.

#include <stdio.h>
#include <conio.h>
int main()
{
    int s,a=0,b=1,n;
    printf("enter the number\n");
    scanf("%d",&n);
    s=a+b;
    printf("the fibonaci series is :");
    printf("\n%d\n%d\n",a,b);
    while(s<n)
    {
        printf("%d\n",s);
        a=b;
        b=s;
        s=a+b;
    }
    return (0);
}
