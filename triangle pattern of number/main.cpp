// Write a c program to print the triangle pattern of the number .

#include<stdio.h>
#include <conio.h>
int main()
{
    int n,i,j,a=1;
    printf("enter the number of row ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",a);
            a++;
        }
        a=1;
        printf("\n");
    }
    getch();
    return(0);
}
