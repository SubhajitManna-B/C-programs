// write a c program to print the total and average of your best of five subjects.


   #include <stdio.h>
   #include<conio.h>
   int main()
{

    int arr[20],n,i,j,temp=0,swap,sum=0;
    float avg=0;
    printf("Enter the number of subjects : ");
    scanf("%d",&n);
    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        swap=0;
        for(j=0;j<(n-i)-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                swap=1;
            }
        }
        if(swap=0)
            {\
                break;
            }
    }
    printf("The best of five numbers are : ");
    for(i=0;i<n-1;i++)
    {
        sum=sum+arr[i];
    printf("\t%d ",arr[i]);
    }
    avg=sum/(n-1);
       printf("\nTotal marrks = %d ",sum);
       printf("\n\t&&");
       printf("\nThe average of five numbers is = %.2f credited by you",avg);
       return(0);


   }

