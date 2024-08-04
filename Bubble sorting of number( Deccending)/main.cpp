//Write a c program to sorting the number in Descending order


#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[20],n,i,j,temp=0,swap;
    printf("Enter the number of digits : ");
    scanf("%d",&n);
    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        swap=0;
        for(j=0;j<(n-i)-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                swap=1;
            }
        }
        if(swap=0)
            {
                break;
            }
    }
    printf("The number in descending order is : ");
    for(i=0;i<n;i++)
    {
    printf("\t%d ",arr[i]);
    }
    return(0);
}
