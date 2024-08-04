//

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    puts("Enter the string :");
    gets(str1);
    strcpy(str2,str1);
    puts("\n");
    if(strcmp(str2,strrev(str1))==0)
        puts("String is pallindrome");
    else
        puts("String is not pallindrome");
    return(0);
}
