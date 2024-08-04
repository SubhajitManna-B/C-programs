%{
   #include<stdio.h>
%}

%%
"n" {printf("Hello world");}
.* {printf("Hello Subha");}
%%
int yywrap(){}

int main(){
    printf("Enter the input : ");
    yylex();
    return 0;
}
