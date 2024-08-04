//


#include<stdio.h>
#include<conio.h>
int patnew(int);
int patnew2(int);
int main()
{
    int row,row2;
    printf("Enter the number of row : ");
    scanf("%d",&row);
    row2=row;
   patnew(row);
   patnew2(row2);
   return(0);
}
int patnew(int row)
{
    int i,j,lap;
     for(i=1;i<row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
            for(lap=1;lap<=36999999;lap++)
            {

            }
        }
        printf("\n");
    }
    printf("      ");
    for(i=1;i<=row;i++)
    {
        printf("*");
    }
    printf("\n");
}

int patnew2(int row2)
{
    int i,j,lap;
     for(i=row2-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
            for(lap=1;lap<=36999999;lap++)
            {

            }
        }
        printf("\n");
    }
}
