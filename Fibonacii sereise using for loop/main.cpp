//Fibonacii sereise using for loop.

#include<stdio.h>
#include<conio.h>
int main()
{
    int a=0,b=1,s,i,num;
    printf("Enter the number of.... : ");
    scanf("%d",&num);
    printf("The %d..... fibonacii sereise is : ",num);
    for(i=0;i<num;i++)
    {
        if(i<=1)
        {
            s=i;
        }
        else
        {
            s=a+b;
            a=b;
            b=s;
        }
        printf("\n\t%d",s);
    }
    return(0);
}
