//Write

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,num,n,a=1;
    printf("Enter the number of row ");
    scanf("%d",&num);
    n=num;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d",a);
            a++;
        }
        a=1;
        printf("\n");
        n--;
    }
    return(0);
}
