#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,m;
    printf("Enter the range of multpication table :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%d * %d = %d\n",i,j,i*j);
        }
    }
    return(0);
}
