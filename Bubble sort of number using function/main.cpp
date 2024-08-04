//Write a c program to sorting the number in Accending order using bubble sort.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,arr[20],i;
    int sort(int n,int arr[]);
    printf("Enter the number of digits : ");
    scanf("%d",&n);
     printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(n,arr);
    return(0);
}
  int sort(int n,int arr[])
{
    int i,j,temp=0,swap;

    for(i=0;i<n-1;i++)
    {
        swap=0;
        for(j=0;j<(n-i)-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                swap=1;
            }
        }
        if(swap==0)
            {
                break;
            }
    }
    printf("The number in accending order is : ");
    for(i=0;i<n;i++)
    {
    printf("\t%d ",arr[i]);
    }
}
