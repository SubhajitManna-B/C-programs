//

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float l,u,h,sum=0,x,result;
    float y[10];
    int i,n;
    printf("Enter the value of lower limit , upper limit & intervals : ");
    scanf("%f%f%d",&l,&u,&n);
    h=(u-l)/n;
    printf("%f",h);
    x=l;
    for(i=0;i<=n;i++)
    {
        y[i]=pow(1/(1+pow(x,2)),2);
        x=x+h;
    }
    for(i=1;i<=n-1;i++)
    {
        sum=sum+y[i];
    }
    result=((h/2)*(y[0]+y[n]+2*sum));

    printf("The values = %f",result);
    return(0);
}
