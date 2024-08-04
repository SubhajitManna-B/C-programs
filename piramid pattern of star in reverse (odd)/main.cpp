#include<stdio.h>
#include<conio.h>
int main()
{
    int n,num,i,j,k;
    printf("Enter the number of rows");
    scanf("%d",&n);
    num=n;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=(n*2)-1;k++)
        {
            printf("*");
        }
        n--;
        printf("\n");
    }
    return(0);
}
