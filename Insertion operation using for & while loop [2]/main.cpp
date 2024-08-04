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
        j=i;
        while(j>0 && che[j-1]>che[j])
        {
            temp=che[j];
            che[j]=che[j-1];
             che[j-1]=temp;
            j--;
        }

    }
    printf("After sorting in ascending order the elements are : ");
    for(i=0;i<size;i++)
    {
        printf("%d\t",che[i]);
    }
    return(0);
}
