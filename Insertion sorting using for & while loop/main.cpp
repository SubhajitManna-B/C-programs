// Sorting the elements using for and while loop.

#include<stdio.h>
#include<conio.h>
int main()
{
    int che[20],size,i,j,temp;
    printf("Enter the number of element : ");
    scanf("%d",&size);
    printf("Enter the elements of  array : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&che[i]);
    }
    for(i=1;i<size;i++)
    {
        temp=che[i];
        j=i-1;
        while(j>=0 && che[j]>temp)
        {
            che[j+1]=che[j];
            j--;
        }
         che[j+1]=temp;
    }
    printf("After sorting in ascending order the elements are : ");
    for(i=0;i<size;i++)
    {
        printf("%d\t",che[i]);
    }
    return(0);
}
