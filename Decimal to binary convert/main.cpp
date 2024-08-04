// converting the numbre decimal to binry

#include<stdio.h>
#include<conio.h>
int main ()
{
    int num,r,temp=0;
    printf("Enter the decimal number : ");
    scanf("%d",&num);
    while(num>0)
    {
        r=num%2;
        num=num/2;
       // temp=(temp*10)+r;

       printf("%d",r);
    }
   // printf("the binary number is : %d",temp);
    return(0);
}
