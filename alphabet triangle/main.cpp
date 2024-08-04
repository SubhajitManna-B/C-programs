#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int i,j,n,a=65;
    printf("enter the number of row : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",a);
            a++;
        }
        a=65;
        printf("\n");
    }
    getch();
    return(0);

}

