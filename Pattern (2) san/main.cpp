#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,k,l,m,num,ch=65,no,s,r;
    printf("Enter the number of row : ");
    scanf("%d",&n);
    num=n;
    no=n;
    r=no;
    s=ch+num-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=num;j++)
        {
            printf("%c",ch);
            ch++;
        }
        ch=65;
        num--;
        for(k=1;k<=i-1;k++)
        {
            printf(" ");
        }
        for(l=1;l<=i-1;l++)
        {
            printf(" ");
        }
        for(m=1;m<=no;m++)
        {
            printf("%c",s);
            s--;
        }
        s=ch+(r-1)-i;
        no--;
        printf("\n");
    }
    return(0);
}
