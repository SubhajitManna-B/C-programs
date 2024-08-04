//Check the number automorphic or not upto n.

#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i,a,mul;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
   {
    mul=i*i;
    a=mul%10;
    if(a==i)
    {
        printf("\nThe number %d is automorphic",i);
    }
    else
{
        printf("\nThe number %d is not automorphic",i);
    }
   }
    return(0);
}
