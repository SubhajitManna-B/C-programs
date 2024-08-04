// Reverse piramid pattern of alphabet.

#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j,k,num,n,ch=65;
    printf("Enter the number of row ");
    scanf("%d",&num);
     n=num;
    for(i=1;i<=num;i++)
    {
       for(j=1;j<=i;j++)
       {
           printf(" ");
       }
        for(k=1;k<=n;k++)
        {
            printf("%c ",ch);
        }
        ch++;
        n--;
        printf("\n");
    }
   return(0);
}

