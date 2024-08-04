// write a c program to print a salary sheet

#include<stdio.h>
#include<conio.h>
int main()
{
   int basic,da,hra,ma,gross;
   printf("Enter the basic salary :");
   scanf("%d",&basic);
   da=basic*50/100;
   hra=basic*30/100;
   ma=basic*20/100;
   gross=basic+da+hra+ma;
   printf("\nThe basic salary = %d \nThe da = %d \nThe hra = %d \nThe ma = %d \nThe gross salary = %d",basic,da,hra,ma,gross);
    return (0);
}
