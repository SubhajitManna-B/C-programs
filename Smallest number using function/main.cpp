//Find the smallest number from array using functions

#include<stdio.h>
#include<conio.h>
int main()
{
   int n,i,a[20];
   int smallest(int n,int a[]);
    printf("Enter the number of element : ");
    scanf("%d",&n);
    printf("\nEnter the elements in array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    smallest(n,a);
    return(0);
}
    int smallest(int n,int a[])
{
    int i,small=0;

    small=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
        }
    }
    printf("\nThe smallest number is : %d",small);
}

