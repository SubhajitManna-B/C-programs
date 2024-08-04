//write a c program to print the piramid pattern of alphabet.

#include <stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,num,n,ch=65;
    printf("Enter the number of row ");
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
            printf("%c ",ch);
        }
        ch++;
        printf("\n");
    }
   return(0);
}
