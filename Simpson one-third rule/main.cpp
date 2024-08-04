//


#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float l,u,h,sum1=0,sum2=0,x,result;
    float y[10];
    int i,n;
    printf("Enter the value of lower limit , upper limit & intervals :\n ");
    scanf("%f%f%d",&l,&u,&n);
    h=(u-l)/n;
    printf("The value of h =%f\n",h);
    x=l;
    for(i=0;i<=n;i++)
    {
        y[i]=sqrt(1-pow(x,2));
        x=x+h;
    }
    for(i=1;i<=n-1;i++)
    {
        if(i%2!=0)
        {
        sum1=sum1+y[i];
        }
        else
        {
          sum2=sum2+y[i];
        }
    }
      for(i=0;i<=n;i++)
      {
          printf("%f\n",y[i]);
      }
      printf("The sum of odd number =%f\n",sum1);
      printf("The sum of even number =%f\n",sum2);
    result=((h/3)*(y[0]+y[n]+4*sum1+2*sum2));

    printf("The values = %f",result);
    return(0);
}

