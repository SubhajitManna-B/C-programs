//

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int v;
    char str1[20]="Pansk";
    char str2[20]="College";
    v=strncmp(str1,str2,2);
    if(v<=0)
    {
        if(v==0)
        {
            puts("str1 is equal to str2");
        }
        else
        {
            puts("str1 is lessthen str2");
        }
    }
    else
    {
        puts("str1 is greaterthen str2");
    }
    return(0);
}
