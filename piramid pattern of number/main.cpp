// write a c program to print the piramid pattern of number.

#include <stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,num,n,a=1;
    printf("Enter the number of row : ");
    scanf("%d",&num);
     n=num;
    for(i=1;i<=num;i++)
    {
       for(j=1;j<=n;j++)
       {
           printf(" ");
       }
           n--;
        for(k=1;k<=i;k++)
        {
            printf("%d ",a);
            a++;
        }
        a=1;
        printf("\n");
    }
   return(0);
}

