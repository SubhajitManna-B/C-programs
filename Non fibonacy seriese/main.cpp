// non fibonacy numbers seriese upto n.

#include<stdio.h>
#include<conio.h>
int main()
{
    int no,a=0,b=1,s=0,i,j=0,m=0,n=1;
    int arr[20];
    printf("Enter the value of n : ");
    scanf("%d",&no);
    while(s<no && j<no)
    {
        j=m+n;
        m=n;
        a=b;
        n=j;
        b=s;
        s=a+b;
        for(i=s;i<j;i++)
        {
            if(i>s && i<j)
            {
                printf("\t%d",i);
            }
        }
    }
    //while(j<no)
   //{
      //  printf("\n%d",j);
       // j=m+n;
       // m=n;
      //  n=j;
    //}
    return(0);
}
