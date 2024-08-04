//write a c program to find average of n number using array,for loop.

#include <stdio.h>
# include<conio.h>
int main()
{
    int i,sum=0;
    float avg;
    int arr[10];
    for(i=0;i<10;i++)
    {
        printf("enter th nubers : arr[%d]",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/10;
    printf("the average is : %f",avg);
    getch();
    return(0);
}

