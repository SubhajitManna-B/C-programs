//Practice the string to improve the skill.

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
   char str1[20],str2[20];
   puts("Enter the string for str1 : ");
   gets(str1);
   puts("Enter the string for str2 : ");
   gets(str2);
   strcat(str1,str2);
   puts(str1);
   strrev(str1);
   puts(str1);

   return(0);
}
