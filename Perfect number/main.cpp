//Check a number perfect or not.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,temp=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            temp=temp+i;
        }
    }
    if(temp==n)
    {
        printf("\nThe number %d is perfect",n);
    }
    else
    {
        printf("\nThe number %d is not perfect",n);
    }
    return(0);
}
