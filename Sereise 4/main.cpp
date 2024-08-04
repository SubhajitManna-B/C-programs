//Sereise of 1^1+2^2+3^3+4^4+.....+n^n


#include <stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,i,s=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+pow(i,i);
    }
    printf("The result is : %d",s);
    return(0);
}
