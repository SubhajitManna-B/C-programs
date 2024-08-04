//write a c program to print the addition of two number.

#include <stdio.h>
#include <conio.h>

int main()
{
 float f,c;
 printf("enter the value of a ");
 scanf("%f",&f);
 //printf("enter the value of b ");
 //scanf("%d",&b);
// c=((5*f)-160)/9;
if(f<=0.0)
{
    if( f==0.0)
        printf("you en 0");
    else
        printf("you neg");
}
else
    {
        printf("posi");
}
 //printf("the sum two number is %f",c);
    return (0);
}
