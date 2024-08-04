// write a c program to print the day of week name using switch case statement.


#include <stdio.h>
#include <conio.h>
int main()
{
    int choice;
    printf("monday will be the first name and so on \n");
    printf("enter any number between (1 - 7)  :  ");
    scanf("%d",&choice);
    printf("\n");
    switch(choice)
    {
    case 1:
        if(choice==1)
            printf("the day is monday");
        break;
    case 2:
        if(choice==2)
            printf("the day is tuesday");
        break;
    case 3:
        if(choice==3)
            printf("the day is wednesday");
        break;
         case 4:
        if(choice==4)
            printf("the day is thrust day");
        break;
         case 5:
        if(choice==5)
            printf("the day is friday");
        break;
         case 6:
        if(choice==6)
            printf("the day is saturday");
        break;
         case 7:
        if(choice==7)
            printf("the day is sunday");
        break;
         default:
            printf("you enter wrong");

    }
    getch();
    return(0);

}
