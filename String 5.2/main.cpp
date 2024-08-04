//

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[20]="Kanakpur ,panskura";
    char *str2;
    str2=strrchr(str1,'p');
    puts(str2);
    return(0);
}
