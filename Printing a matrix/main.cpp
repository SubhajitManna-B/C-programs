//

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,first[10][10],r,c;
    printf("Enter the number of row and column : \n");
    scanf("%d  %d",&r,&c);
    printf("Enter the values of matrix : ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&first[i][j]);
        }
    }
    printf("The matrix is : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",first[i][j]);
        }
        printf("\n");
    }
    return(0);
}
