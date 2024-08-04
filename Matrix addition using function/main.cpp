//Addition of two matrix

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,first[10][10],second[10][10],m,n,p,q;
    int matadd(int first[10][10], int second[10][10],int m,int n, int p, int q);
    printf("Enter the number of row and column of 1st : \n");
    scanf("%d  %d",&m,&n);
    printf("Enter the values of first matrix : ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&first[i][j]);
        }
    }
    printf("Enter the number of row and column of 2nd : \n");
    scanf("%d  %d",&p,&q);
    printf("Enter the values of second matrix : \n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&second[i][j]);
        }
    }
    matadd(first,second,m,n,p,q);
    return(0);
}
int matadd(int first[10][10],int second[10][10],int m,int n, int p, int q)
  {
   int i,j,third[10][10];
   if(m==p && n==q)
   {
       for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            third[i][j]=first[i][j]+second[i][j];
        }
    }
    printf("The first matrix is : \n\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d",first[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is : \n\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("\t%d",second[i][j]);
        }
        printf("\n");
    }
    printf("The addition of two matrix is : \n\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d",third[i][j]);
        }
        printf("\n");
    }
   }
   else
   {
       printf("The addition matrix can't solve");
   }
}
