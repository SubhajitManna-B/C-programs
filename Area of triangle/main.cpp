//Write a c program to find the area of a triangle .

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,c,ts,area;
    printf("enter the value of a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    ts=(a+b+c)/2;
    printf("The perimeter of triangle is : %f\n",ts);
    area=sqrt(ts*((ts-a)*(ts-b)*(ts-c)));
    printf("The area of triangle is : %f",area);
    return(0);
}
