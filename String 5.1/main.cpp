//

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[20]="kanakpur panskura";
    char *str2;
    str2=strchr(str1,'p');
    puts(str2);
    return(0);
}
