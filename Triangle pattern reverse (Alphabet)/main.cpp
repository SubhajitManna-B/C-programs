//


#include<stdio.h>
#include<conio.h>
int main()
{
    int rno,n,i,j,k,a=1;
    printf("Enter the number of row : ");
    scanf("%d",&rno);
    n=rno;
    for(i=1;i<=rno;i++)
    {
        for(j=n;j>=1;j--)
        {
            printf(" ");
        }
        n--;
        for(k=1;k<=i;k++)
        {
            printf("%d",a);
            a++;
        }
        a=1;
        printf("\n");
    }
    return(0);
}
