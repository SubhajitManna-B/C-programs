//

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[20]="Panskura College";
    char str2[20];
    strncpy(str2,str1,6);
    puts(str1);
    puts(str2);
    return(0);
}
