
#include<stdio.h>
#include<conio.h>
int main()
{
 int n;
 printf("Enter the number : ");
 scanf("%d",&n);
int i,f=1,sum=0,r;
int num=n;
while(n>0)
{
r=n%10;
n=n/10;
for(i=1;i<=r;i++)
{
f=f*i;
}
sum=sum+f;
f=1;
}
if(num==sum)
printf("strong");
else
 printf("Not strong");
}
