#include<stdio.h>
#include<conio.h>
int main()
{
    int che[20],size,i,j,temp=0;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    printf("Enter the elements in array : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&che[i]);
    }
    for(i=1;i<size;i++)
    {
        for(j=i;j>0;j--)
        {
            if(che[j]<che[j-1])
            {
                temp=che[j];
                che[j]=che[j-1];
                che[j-1]=temp;
            }
        }
    }
    printf("After sorting the elements in ascending order = ");
    for(i=0;i<size;i++)
    {
    printf("\t%d",che[i]);
    }
}
