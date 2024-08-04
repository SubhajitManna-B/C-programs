//

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,arr[20],pos,item;
    int arraych(int n,int arr[],int position,int item);
    printf("Enter the nnumber of elments : ");
    scanf("%d",&n);
    printf("\nEnter the array elements : ");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("\nEnter position : ");
    scanf("%d",&pos);
    printf("\n Enter the item number : ");
    scanf("%d",&item);
    arraych(n,arr,pos,item);
    return(0);
}
    int arraych(int n,int arr[],int pos,int item)
    {
        int i;
        for(i=n-1;i>=pos;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos]=item;
        n=n+1;
        printf("\nAfter editing the array is : ");
        for(i=0;i<n;i++)
        {
            printf("\t%d",arr[i]);
        }
    }
