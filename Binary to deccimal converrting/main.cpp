//Converting the number binayr  to decimal

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i=1,n,r,sum=0,temp=1;
    printf("Enter the binary number : ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*temp);
        temp=pow(2,i);
        i=i+1;
        n=n/10;
    }
    printf("%d",sum);
    return(0);
}
