//

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int v;
    char str1[20];
    char str2[20];
    puts("Enter the character in str1");
    gets(str1);
    puts("Enter the character in str2");
    gets(str2);
    v=strcmp(str1,str2);
    if(v<=0)
    {
        if(v==0)
        {
            printf("str1 is equal to str2");
        }
        else
        {
            printf("str1 is lessthen str2");
        }
    }
    else
    {
        printf("str1 is greater then str2");
    }
    return(0);
}
