// Different type of pattern using for loop.

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of row :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==((n/2)+1) || j==((n/2)+1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return(0);
}
