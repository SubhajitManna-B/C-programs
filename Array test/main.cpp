
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,a=0,b=0,c1=0,c2=0;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for(i=1,j=n;i<=n,j>=1;i++,j--)
    {
        a=a+i;
        b=b+j;
        c1+=1;
        c2=c2+1;
    }
    printf("\nA = %d",a);
    printf("\nB = %d",b);
    printf("\nC1 = %d",c1);
    printf("\nC2 = %d",c2);
    return(0);
}
