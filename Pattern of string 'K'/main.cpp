
#include<stdio.h>
#include<conio.h>
int main()
{
    int r,i,j,k,l,m,n,o,p,q;
    printf("Enter the number of row\n");
    scanf("%d",&r);
    for(i=1;i<=r-1;i++)
    {
        printf("\t");
        for(j=1;j<=r;j++)
        {
            if(j==1 || i+j==r+1)
            {
            printf("K");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=1;i<=r;i++)
    {
        printf("\t");
        for(j=1;j<=r;j++)
        {
            if(j==1 || i==j)
            {
                printf("K");
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
