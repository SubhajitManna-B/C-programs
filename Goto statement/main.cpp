//

#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    if(n%2==0)
    {
        goto l1;
    }
    else
        {
        goto l2;
        }
    l1:printf("\nThe number %d is even\n\n",n);
    goto end;
    l2:printf("\nThe number %d is odd\n\n",n);
    end:printf("Successfully run\n");
    return(0);
}
