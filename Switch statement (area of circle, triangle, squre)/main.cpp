//eite a c program using switch to calculate the area of circle or triangle or squre.

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n;
    float r,a,b,c,areac,perimetert,areat,areas;
    printf("\n Enter 1 for area of circle \n Enter 2 for area of triangle \n Enter 3 for area of squre\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("enter the rrrrrrr\n");
        scanf("%f",&r);
        areac=(22/7)*r*r;
        printf("The area of circle is %f",areac);
        break;
    case 2:
        printf("Enter the value of a,b,c\n");
        scanf("%f%f%f",&a,&b,&c);
        perimetert=(a+b+c)/2;
        areat=sqrt(perimetert*(perimetert-a)*(perimetert-b)*(perimetert-c));
        printf("The area of triangle is %f",areat);
        break;
    case 3:
        printf("Enter the value of a,b\n");
        scanf("%f%f",&a,&b);
        areas=a*b;
        printf("The area of squre is %f",areas);
        break;
    default:
        printf("aaaaayou entered wrong number");
    }
    return(0);
}
