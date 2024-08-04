#include<stdio.h>
#include<conio.h>
int main()
{
    char ch[30];
    int n,i,j,k;
    printf("Enter the number of character of name : ");
    scanf("%d",&n);
    printf("enter the character :");
    for(k=0;k<n+1;k++)
    {
        scanf("%c",&ch[k]);
    }
    for(k=0;k<=n+1;k++)
    {
    if(ch[k]=='a')
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(j==1 || j==n || i==1 || i==n/2)
                {
                    printf("A");
                }
                else
                {
                    printf(" ");
                }
            }
       printf("\n");
        }
    }
    else if(ch[k]=='b')
    {
         for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(j==1 || j==n || i==1 || i==n || i==n/2)
                {
                    printf("B");
                }
                else
                {
                    printf(" ");
                }
            }
             printf("\n");
         }

    }

    else
    {
      for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(j==1 || i==n)
                {
                    printf(" ");
                }
                else
                {
                    printf(" ");
                }
            }
             printf("\n");
         }
    }
    }
    return(0);
}
