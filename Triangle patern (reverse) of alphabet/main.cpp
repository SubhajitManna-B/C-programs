//Write

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,num,n,ch=65;
    printf("Enter the number of row ");
    scanf("%d",&num);
    n=num;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c",ch);
            ch++;
        }
        ch=65;
        printf("\n");
        n--;
    }
    return(0);
}
