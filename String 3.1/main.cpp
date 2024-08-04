//

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[20]="Panskura ";
    char str2[20]="College ";
    strcat(str1,str2);
    puts(str1);
    printf("\n\n");
    strcat(str2,str1);
    puts(str2);
    return(0);
}
