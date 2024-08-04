//Check a number magic or not

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r,s,a=0,b=0,i,temp=0,m;
    printf("Enter the number : ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
    r=n%10;
    n=n/10;
    a=a+r;
    }
    i=a;
    while(a>0)
    {
        s=a%10;
        a=a/10;
        b=(b*10)+s;
    }
    m=i*b;
     printf("\n%d",m);
    if(temp==m)
    {
        printf("The number is a magic number");
    }
    else
    {
        printf("The number is not a magic number");
    }
    return(0);
}
