//Address of variable and their value

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,sum=0;
    char ch;
    int *p;
    p=&sum;
    printf("Enter the value of a & b: ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("\nThe value of a = %d",a);
    printf("\nThe address of a = %p",&a);
    printf("\nThe address of a = %x",&a);
    printf("\nThe address of a = %X",&a);
    printf("\nThe value of b = %d",b);
    printf("\nThe address of b = %p",&a);
    printf("\nThe address of b = %x",&b);
    printf("\nThe address of b = %X",&a);
    printf("\nThe value of sum = %d",sum);
    printf("\nThe value of sum = %d",*p);
    printf("\nThe address of sum = %p",&sum);
    printf("\nThe address of sum = %p",&*p);
    printf("\nThe address of p = %p",&p);
    printf("\nThe size of integer = %d",sizeof(int));
    printf("\nThe size of character = %d",sizeof(char));
    printf("\nThe size of float = %d",sizeof(float));
    printf("\nThe size of vari = %d",sizeof(ch));
    return(0);
}
