#include<stdio.h>

int main(){
    FILE *ptr;
    char str[50];

    // -----------File Read Operation--------------
    // ptr = fopen("C:\\Users\\Subhajit\\Desktop\\VS CODE\\sample.txt","r");
    // fscanf(ptr,"%s",str);
    // printf("The content of file is : %s",str);

    
    //-------------file write operation--------------
    // ptr = fopen("C:\\Users\\Subhajit\\Desktop\\VS CODE\\TextFile.txt","w");
    // printf("Enter the content for file : ");
    // gets(str);
    // fprintf(ptr,"%s",str);


    ptr = fopen("C:\\Users\\Subhajit\\Desktop\\VS CODE\\TextFile3.txt","a");
    // char c = fgetc(ptr);
    // char ch = getc(ptr);
    // char str1[30];
    // fgets(str1,5,ptr);
    // //printf("The charcter is %c and %c .\n",c,ch);
    // printf("The string is %s .",str1);
    fputs("\nSubhajit you are such a good boy with bad luck.",ptr);

    fclose(ptr);
    return 0;
}