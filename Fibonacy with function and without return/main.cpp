//Fibonacy with function and without return.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    int fibo(int n);
    printf("enter the value of n :\n");
    scanf("%d",&n);
    fibo(n);
    return(0);
}

int fibo(int n)
{
    int a=0,b=1,s;
    s=a+b;
    printf("the fibonacy series is : \n");
    printf("%d\n%d\n",a,b);
    while(s<n)
    {
        printf("%d\n",s);
        a=b;
        b=s;
        s=a+b;
    }

}
