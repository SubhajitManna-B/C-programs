// Reverse piramid pattern of number.

#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j,k,num,n,a=1;
    printf("Enter the number of row ");
    scanf("%d",&num);
     n=num;
    for(i=1;i<=num;i++)
    {
       for(j=1;j<=i;j++)
       {
           printf(" ");
       }
        for(k=1;k<=n;k--)
        {
            printf("%d ",a);
            a++;
        }
        a=1;
        n--;
        printf("\n");
    }
   return(0);
}

