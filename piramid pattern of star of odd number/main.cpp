//

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,n,num;
    printf("Enter the number of rows");
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
            printf("*");
        }
    printf("\n");
    }
    getch();
}
