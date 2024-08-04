//Different types of pattern using for loop.

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    char s1,s2;
    printf("Enter two character for pattern :\n");
    scanf("%c\n%c",&s1,&s2);
    printf("\nEnter the number  of row :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n)
            {
                printf("%c",s1);
            }
            else
            {
                printf("%c",s2);
            }
        }
        printf("\n");
    }
    return(0);
}

