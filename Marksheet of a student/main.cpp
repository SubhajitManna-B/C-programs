// Grade of a student.

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e;
    float avg;
    printf("\nEnter the marks of best five subjects : \n");
    scanf("%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e);
    avg=(a+b+c+d+e)/5;
    printf("\n The average of numbers is : %.2f\n",avg);
   if(avg>=25)
   {
       if(avg>=90)
       printf("Grade : Outstanding");
       else if(avg<90 && avg>=80)
        printf("Grade : Excellent");
       else if(avg<80 && avg>=60)
        printf("Grade : Verry good");
       else if(avg>=45 && avg<60)
        printf("Grade : Good");
       else if("avg>=35 && avg<45")
        printf("Grade : Satisfactory");
       else
        printf("Grade : Marginal");
   }
   else
   {
    printf("Grade : Disqualified");
   }
    return(0);
}
