#include <stdio.h>
#include<conio.h>

void printArray(int* arr,int n){
int i;
for(i=0;i<n;i++)
{
    printf("%d\t",arr[i]);
}
}
int main()
{
    int arr[10],n,i;
    printf("How many number of elelmentsdo you want to take : ");
    scanf("%d",&n);
    printf("\nEnter the elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printArray(arr,n);
    return 0;
}
