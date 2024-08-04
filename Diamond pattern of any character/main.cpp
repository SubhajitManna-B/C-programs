//

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,n,num,s,a;
    char sym;
    printf("Enter any character for pattern :");
    scanf("%c",&sym);
    printf("Enter the number of rows :");
    scanf("%d",&n);
    if(n%2==0)
    {
        n=n+1;
    }
    num=n;
    s=n/2;
    for(i=1;i<=((num/2)+1);i++)
    {
        for(j=1;j<=s;j++)
        {
            printf(" ");
        }
        s--;
        for(k=1;k<=((i*2)-1);k++)
        {
            printf("%c",sym);
        }
    printf("\n");
    }
    s=n/2;
    for(i=1;i<=(num/2);i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=((s*2)-1);k++)
        {
            printf("%c",sym);
        }
        s--;
        printf("\n");
    }
    getch();
}
