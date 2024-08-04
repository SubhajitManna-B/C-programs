//

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,j,temp=0,r,k;
    printf("Enter the range for checking : ");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        j=i;
        k=i;
        while(j>0)
        {
            r=j%10;
            temp=(temp*10)+r;
            j=j/10;
        }
        //printf("The value in tem= %d",temp);
        if(k==temp)
        {
            printf("The number %d is pallindrome \n\n",k);
        }
        else
        {
            printf("The number %d is not pallindrome \n\n",k);
        }
        temp=0;
        //i++;
    }
    return(0);
}
