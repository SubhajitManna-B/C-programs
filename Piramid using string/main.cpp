//

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,j,l;
    char str[30];
    puts("Enter the string : ");
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%3c",str[j]);
        }
        printf("\n");
    }
    return(0);
}
