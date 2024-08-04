#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    printf("enter i : ");
    scanf("%d",&i);
    if(i>10)
    {
        printf("%d > 10",i);
    }
    else
    {
        if(i>5)
        {
            printf("10 > %d > 5",i);
        }
        else
        {
            printf("%d < 5",i);
        }
    }
 return(0);
}
