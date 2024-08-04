//

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    char sym;
    printf("Enter any character for pattern :");
    scanf("%c",&sym);
    printf("enter the number of row :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf(" %c",sym);
        }
        printf("\n");
    }
    return(0);
}
