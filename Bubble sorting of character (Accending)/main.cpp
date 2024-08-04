//Write a c program to sorting the character in accending order using bubble sort.


#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,temp=0,swap;
    char arr[20];
    printf("Enter the number of character : ");
    scanf("%d",&n);
    printf("Enter the chacters : ");
    n=n+1;
    for(i=0;i<n;i++)
    {
        scanf("%c",&arr[i]);
    }
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
        if(swap=0)
            {
                break;
            }
    }
    printf("The number in accending order is : ");
    for(i=0;i<n;i++)
    {
    printf("\t%c ",arr[i]);
    }
    return(0);
}
