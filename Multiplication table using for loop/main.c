//Write a c program to print the multiplication table of a number.

#include <stdio.h>
#include <conio.h>

int main()
{
  int n,i;
  printf("enter an integer: ");;
  scanf("%d",&n);
  for(i=1;i<=10;++i)
  {
      printf("%d * %d = %d\n",n,i,n*i);
  }
    return 0;
}
