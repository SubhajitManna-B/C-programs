//Check the number prime or not prime from m to n

//write a c program to find first n prime numbers using nested for loops.

#include<stdio.h>
#include<conio.h>
int main()
{
    int m,n,i,j,c=0;
    printf("Enter the starting number and ending number : ");
    scanf("%d %d",&m,&n);
    printf("The prime number between %d and %d are : ",m,n);
    for(i=m;i<=n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
              c=c+1;
            }
        }
            if(c==2)
            {
            printf("\n%d is prime",i);
            }
            else
            {
                printf("\n%d is not prime",i);
            }
    }
    return(0);
}
