//

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    printf("Enter the range of multpication table :");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d * %d = %d\t",j,i,i*j);
        }
            printf("\n");
    }
    return(0);
}
