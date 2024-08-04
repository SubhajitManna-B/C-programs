#include<stdio.h>
#include<conio.h>
int main()
{
    int n,num,i,j,k;
    printf("enter the number of row");
    scanf("%d",&n);
    num=n;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf(" ");
        }
        n--;
        for(k=1;k<=((2*i)-1);k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return(0);
}
