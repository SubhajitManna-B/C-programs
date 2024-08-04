// write a c program to check the character is alphabet(upper case or lower case) or digit or a special character.

#include <stdio.h>
#include <conio.h>
int main()

{
    char a;
    printf("enter the character ");
    scanf("%c",&a);
    if(a>=65 && a<90)
    {
        printf("it is a upper case character",a);
    }
    else if(a>=97 && a<122)
        {
            printf("it is a lower case character",a);
        }
    else if(a>48 && a<57)
        {
            printf("it is a digit");
        }
    else
    {
        printf("it is special character");
    }

    getch();
    return(0);
}
