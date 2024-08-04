//Different types of pattern using for loop.

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    char s1;
    printf("Enter the character for pattern :\n");
    scanf("%c",&s1);
    printf("\nEnter the number  of row :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\t\t\t\t");
        for(j=1;j<=n;j++)
        {
            if(i==1 || j==(n/2)+1)
            {
                printf("%c",s1);
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
