//Check the number automorphic or not.

#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i,mul;
    printf("Enter the number : ");
    scanf("%d",&num);
    mul=num*num;
    i=mul%10;
    if(i==num)
    {
        printf("The number %d is automorphic",num);
    }
    else
    {
        printf("The number %d is not automorphic",num);
    }
    return(0);
}
