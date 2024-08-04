// write a c program to find the largest number among n number.

# include<stdio.h>
# include<conio.h>
int main()
{
    int a[10],large =0,i;
    printf("enter the numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]>large)
        {
            large=a[i];
        }
    }
    printf("the largest number : %d",large);
    getch();
    return(0);
}
