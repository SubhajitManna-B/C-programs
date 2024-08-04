// write a c program to solve the lcm of two number using for loop.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,i,lcm,m1,m2;
    printf("enter the two number %d \n %d",n1,n2);
    scanf("%d \n %d",&n1,&n2);
    for(i=1;i>=n1&&i>=n2;++i)
    {
        m1=n1*i;
        m2=n2*i;
        i++;
    }
        if(m1==m2)


    printf("%d is lcm",m1);
    return(0);
}
