


//differnt type of pattern.

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,n,num;
    char sym1,sym2;
    printf("Enter the two character :\n");
    scanf("%c\n%c",&sym1,&sym2);
    printf("\nEnter the number of row :\n ");
    scanf("%d",&n);
    num=n;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf(" ");
        }
        n--;
        for(k=1;k<=((i*2)-1);k++)
        {
        if(k==1|| i==num || k==(2*i-1))
         {
            printf("%c",sym1);
         }
        else
         {
            printf("%c",sym2);
         }
        }
        printf("\n");
    }
   return(0);
}
