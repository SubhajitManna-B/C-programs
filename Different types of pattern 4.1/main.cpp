//Different types of pattern using for loop.

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    printf("\nEnter the number  of row :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n)
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

