//write a c program to display the star pattern using nested for loop.

#include <stdio.h>
#include <conio.h>
int main()
{
   int i,j;
   printf("output of the nested for loop\n");
   for(i=0;i<5;i++)
   {
       printf("\t\t\t\t");
       for(j=0;j<5;j++)
       printf("* ");
       printf("\n");
   }
   getch();
   return(0);
}


