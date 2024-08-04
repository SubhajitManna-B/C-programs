//Check the numbers magic or not upto n.


#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r,s,c,a=0,b=0,store,i,temp=0,m;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    temp=i;
    c=i;
    while(c>0)
    {
    r=c%10;
    c=c/10;
    a=a+r;
    }
    store=a;
    while(a>0)
    {
        s=a%10;
        a=a/10;
        b=(b*10)+s;
    }
    m=store*b;
    if(temp==m)
    {
        printf("\nThe number %d is a magic number",i);
    }
    else
    {
        printf("\nThe number %d is not a magic number",i);
    }
    a=0;
    m=0;
    store=0;
    b=0;
  }
    return(0);
}
