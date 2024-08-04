//matrix multiplication
#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,m,n,p,q,mat1[10][10],mat2[10][10];
 int matmul(int m,int n,int p,int q,int mat1[][10],int mat2[][10]);
printf("Enter row and column of 1st matrix\n");
scanf("%d%d",&m,&n);
printf("Enter values of 1st matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&mat1[i][j]);
}
}
printf("Enter row and column of 2nd matrix\n");
scanf("%d%d",&p,&q);
printf("Enter values of 2nd matrix\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&mat2[i][j]);
}
}
printf("1st Matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",mat1[i][j]);
}
printf("\n");
}
printf("2nd matrix\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",mat2[i][j]);
}
printf("\n");
}
matmul(m,n,p,q,mat1,mat2);
getch();
}

int matmul(int m,int n,int p,int q,int mat1[][10],int mat2[][10])
{
int i,j,k,s,mat3[10][10];

if(n==p)
{
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
s=0;
for(k=0;k<q;k++)
{
 s=s+mat1[i][k]*mat2[k][j];
}
mat3[i][j]=s;
}
}
}
else
{
printf("matrix multiplication is not possible\n");
}
printf("After multiplication\n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
 printf("%d\t",mat3[i][j]);
}
printf("\n");
}
}
