//

#include<stdio.h>
#include<conio.h>
int main()
{
    int a=0,b=1,s,i,n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n%d",a);
        s=a+b;
        a=b;
        b=s;
    }
    return(0);
}
