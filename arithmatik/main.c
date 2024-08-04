#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   float a,b,ad,sub,mul,div;
   int n;
    printf("\n 1for addition\n 2 for subscription\n 3 for multipication\n 4 for divition");
    scanf("%d",&n);
    printf("the two number ",a,b);
    scanf("%f%f",&a,&b);

    switch(n)
    {
      case 1:
        ad=a+b;
        printf("the value of addition is %f",ad);
        break;
    case 2:
        sub=a-b;
        printf("the value of sub is %f",sub);
        break;
    case 3:
        mul=a*b;
        printf("the value of mul is %f",mul);
        break;
    case 4:
        div=a/b;
        printf("the value of div is %f",div);
        break;
    default:
        printf("wrong value");
        break;
        }

    return (0);
}
