// Reverse piramid pattern of alphabet.

#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j,k,num,n,s,ch=65;
    printf("Enter the number of row ");
    scanf("%d",&num);
    s=ch+num-1;
     n=num;
    for(i=1;i<=num;i++)
    {
       for(j=1;j<=i;j++)
       {
           printf(" ");
       }
        for(k=1;k<=n;k++)
        {
            printf("%c ",s);
            s--;
        }
        s=ch+(num-1)-i;
        n--;
        printf("\n");
    }
   return(0);
}

