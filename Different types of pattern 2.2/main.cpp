

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    char sym1,sym2;
    printf("Enter two character :\n");
    scanf("%c\n%c",&sym1,&sym2);
    printf("\nEnter the number  of row :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            {
                printf("%c",sym1);
            }
            else
            {
                printf("%c",sym2);
            }
        }
        printf("\n");
    }
    return(0);
}
