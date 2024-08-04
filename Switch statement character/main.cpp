

#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    printf("enter a letter\n");
    scanf("%c",&c);
    switch(c)
    {
    case 'S':
        printf("Sunday ");
        break;
    case 'T':
        printf("Tuesday");
        break;

    default:
        printf("you entered wrong number");
    }
    return(0);
}
