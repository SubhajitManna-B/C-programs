//

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[20]="Panskura ";
    char str2[20]="College ";
    strncat(str1,str2,5);
    puts(str1);
    printf("\n\n\n");
    strncat(str2,str1,4);
    puts(str2);
    return(0);
}
