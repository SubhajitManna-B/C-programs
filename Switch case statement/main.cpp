

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n;
    float a,b,c,d,sum,mul,sub;
    printf("\n Enter 1 for sum/mul \n Enter 2 for sub \n ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("\n 's' for sum \n 'm' for mul\n");
        scanf("%d",&n);
        switch(n)
        {
      case 1:
        printf("Enter the value of a,b\n");
        scanf("%f%f",&a,&b);
        sum=a+b;
        printf("The sum of a,b is %f",sum);
        break;
      case 2:
        printf("enter the value of a,b\n");
        scanf("%f%f",&a,&b);
        mul=a*b;
        printf("The area of circle is %f",mul);
        break;
      default:
        printf("You entered wrong");
        }
        break;
    case 2:
        printf("Enter the value of c,d\n");
        scanf("%f%f",&c,&d);
        sub=c-d;
        printf("The substraction a,b is %f",sub);
        break;

    default:
        printf("aaaaayou entered wrong number");
    }
    return(0);
}
