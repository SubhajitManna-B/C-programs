//Check a number perfect or not upto n.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,temp=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    for(j=1;j<i;j++)
    {
        if(i%j==0)
        {
            temp=temp+j;
        }
    }
    if(temp==i)
    {
        printf("\nThe number %d is perfect",i);
    }
    else
    {
        printf("\nThe number %d is not perfect",i);
    }
    temp=0;
   }
    return(0);
}
