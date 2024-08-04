// write a c program to find the area of circle using symbolic constant.

#include<stdio.h>
#include<conio.h>
#define pi 3.14
int main()
{
    float area,r;
    printf("Enter the radius : ");
    scanf("%f",&r);
    area=pi*(r*r);
    printf("the area of circle = %.2f",area);
    return(0);
}
