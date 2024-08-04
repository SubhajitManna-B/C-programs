// Palindrom with function and wuthout return.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    int pal(int n);
    printf("enter the number : \n");
    scanf("%d",&n);
    pal(n);
    return(0);
}

int pal(int n)
{
    int r,sum=0,temp;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum)
     {
       printf("the number is palindrom");
     }
    else
    {
      printf("the number is not palindrom");
    }

}
