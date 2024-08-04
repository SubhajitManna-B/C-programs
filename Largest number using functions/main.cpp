//Find the largest number from array using functions.


#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,a[20];
    int large(int n,int a[]);
    printf("Enter the number of element : ");
    scanf("%d",&n);
    printf("\nEnter the elements in array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    large(n,a);
    return(0);
}
    int large(int n,int a[])
{
    int i,lar=0;
    lar=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>lar)
        {
            lar=a[i];
        }
    }
    printf("\nThe largest number is : %d",lar);
}
