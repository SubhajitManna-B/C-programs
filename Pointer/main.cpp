// pointer.....


#include<stdio.h>
#include<conio.h>
int main()
{
    int a,*p;
    printf("Enter the value of a = ");
    scanf("%d",&a);
    p=&a;
    printf("The value of p = %d",*p);
    return(0);
}
