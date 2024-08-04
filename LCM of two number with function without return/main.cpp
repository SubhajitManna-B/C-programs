//

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    int lcm(int a,int b);
    printf("enter the two number :\n");
    scanf("%d%d",&a,&b);
    lcm(a,b);
    return(0);
}

    int lcm(int a,int b)
{
    int m,n;
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
}
