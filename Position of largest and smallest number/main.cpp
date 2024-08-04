//Find the largest and smallest number from the array and their position.


#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[20],num,i,larg,small,larpo=0,smalpo=0;
    printf("Enter the number of digits : ");
    scanf("%d",&num);
    printf("Enter the elements of array : ");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    larg=arr[0];
    for(i=0;i<num;i++)
    {
        if(larg<arr[i])
        {
            larg=arr[i];
            larpo=i;
        }
    }
    printf("\nThe largest number is : %d \n And position of largest number is : %d\n",larg,larpo+1);
      small=arr[0];
    for(i=0;i<num;i++)
    {
        if(small>arr[i])
        {
            small=arr[i];
            smalpo=i;
        }
    }
    printf("\nThe smallest number is : %d \n And position of smallest number is : %d",small,smalpo+1);
    return(0);
}
