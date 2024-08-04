#include<stdio.h>
#include<string.h>

int main(){
    // char str[30];
    // printf("Enter a string : ");
    // gets(str);
    // puts(str);
    
    // //----------length
    // printf("\nThe length of string is : %d",strlen(str));
    // long int len = strnlen(str,5);
    // printf("\nThe length of string is : %d",len);


    // //compare
    // char str1[]= "Subho";
    // char str2[] = "Subhajit";
    // printf("The compare is : %d",strcmp(str1,str2));
    // printf("The compare is : %d",strncmp(str1,str2,5)); //with a range

    
    //concatenation
    // char str1[]= "Subho";
    // char str2[] = "Jit Manna";
    // printf("\nThe compare is : %s",strcat(str1,str2));
    // printf("\nThe compare is : %s",strncat(str1,str2,3));


    //copy
    // char str1[]= "Subho";
    // char str2[] = "Jit Manna";
    // // printf("\nThe compare is : %s",strcpy(str1,str2));
    // // printf("\n %s",str1);
    // printf("\nThe compare is : %s",strncpy(str1,str2,3));

    
    //find char
    // char str1[]= "Subho Subha";
    // char str2[] = "Jit Manna";
    // printf("\n%s",strchr(str1,'b'));
    // printf("\n%s",strrchr(str1,'b'));
    //printf("\nThe compare is : %s",strncat(str1,str2,3));


    // //find string
    // char str1[]= "Subho Subhajit";
    // char str2[] = "Jit Manna";
    // printf("\n%s",strstr(str1,"bha"));
    

    // //Reverse
    // char str1[]= "Subho Subhajit";
    // printf(strrev(str1)); 

    
    char str1[]= "Subho Subha";
    char str2[] = "Jit Manna";
    printf(str1+str2);
    return 0;
}