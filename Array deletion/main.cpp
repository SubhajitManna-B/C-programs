//Array deletion operation

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,arr[20],pos;
    int arraydel(int n, int arr[],int pos);
    printf("Enter the number of elments : ");
    scanf("%d",&n);
    printf("\nEnter the elements of array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the position : ");
    scanf("%d",&pos);
    arraydel(n, arr ,pos);
    return(0);
}
int arraydel(int n, int arr[],int pos)
{
    int i,temp=0;
    temp=arr[pos];
    for(i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n=n-1;
    printf("The deleted item is : %d",temp);
    printf("\nAfter the deletion the array is : ");
    for(i=0;i<n;i++)
    {
        printf("\t%d",arr[i]);
    }
}
