//


// write a c program to find the largest number among n number.

# include<stdio.h>
# include<conio.h>
int main()
{
    int a[10],n,large,i,lp,small,sp;
    printf("Enter the of input : ");
    scanf("%d",&n);
    printf("\nEnter the numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    large=a[0];
    lp=0;
    for(i=1;i<n;i++)
    {
        if(a[i]>large)
        {
            large=a[i];
            lp=i;
        }
    }
    printf("the largest number : %d",large);
    printf("the largest number position is : %d",lp+1);
    small=a[0];
    sp=0;
    for(i=1;i<n;i++)
    {
        if(a[i]<small)
        {
           small=a[i];
            sp=i;
        }
    }
    printf("the smallest number : %d",small);
    printf("the smallest number position is : %d",sp+1);
    getch();
    return(0);
}
