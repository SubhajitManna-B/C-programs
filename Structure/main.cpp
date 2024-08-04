// Example of structure


#include<stdio.h>
#include<conio.h>
int main()
{
  struct student
  {
      int rno;
      float marks;
  }bca;
  printf("Enter the student roll no : ");
  scanf("%d",&bca.rno);
  printf("Enter the student marks : ");
  scanf("%f",&bca.marks);
  printf("\nStudent roll no is = %d",bca.rno);
  printf("\nStudent marks = %f",bca.marks);
  return(0);
}
