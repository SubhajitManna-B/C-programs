//

#include<stdio.h>
#include<stdio.h>
int main()
{
    int a,b,s;
    int *x,*y;
    printf("Enter the value of a,b");
    scanf("%d%d",&a,&b);
    x=&a;
    y=&b;
    s=a+b;
    s=*x+*y;
    printf("sum =%d",s);
    return(0);
}
