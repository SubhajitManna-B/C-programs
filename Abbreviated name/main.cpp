// Abbreviated name.

#include <stdio.h>
#include <conio.h>
int main()
{
    char fname[20],mname[20],lname[20];
    printf("Enter the First name,Middle name & Last name :\n");
    scanf("%s%s%s",&fname,&mname,&lname);
    printf("Abbreviated name :");
    printf("%c. %c. %s",fname[0],mname[0],lname);
   return(0);
}

