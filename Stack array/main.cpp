    //stack Using Array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
int top=-1;
int stack[MAX];
int main()
{
int ch;
void push();
void pop();
void traverse();
void sorting();
while(1)
{
printf("\n\n->press 1  for push operation");
printf("\n->press 2 for pop operation");
printf("\n->press 3 for display  stack operation");
printf("\n->Press 4 for sorting the items");
printf("\n->press 5  for exit program");
printf("\n->Enter your Choice :\t");
scanf("%d",&ch);
switch(ch)
{
 case 1: push();
	 break;
 case 2: pop();
	 break;
 case 3: traverse();
	 break;
 case 4: sorting();
     break;
 case 5: exit(1);
 default:
	 printf("\n You entered wrong choice");

}//end switch
}//end while
return(0);
}// end main

void push()
{
int item;
if(top<MAX-1)
{
top=top+1;
printf("\nEnter item :\t");
scanf("%d",&item);
stack[top]=item;
}//end if
else
printf("\nStack is overflow");
}//end push
void pop()
{
if(top>-1)
{
printf("\n Deleted item = %d",stack[top]);
top=top-1;
}//end if
else
 printf("\nStack is underflow");
}//end pop

void traverse()
{
int i;
if(top>-1)
{
printf("\nItems on this stack : ");
for(i=top;i>=0;i--)
{
printf("%d->\t",stack[i]);
}//end for
}//end if
else
printf("\nStack is underflow");
}//end traverse
void sorting()
{
    int n;
    int i,j,temp=0,swap;
    printf("Enter 1 for ascending order \n Enter 2 for descending order\n");
    scanf("%d",&n);
    switch(n)
    {
case 1:
   for(i=0;i<top;i++)
    {
        swap=0;
        for(j=0;j<(top);j++)
        {
            if(stack[j]>stack[j+1])
            {
                temp=stack[j+1];
                stack[j+1]=stack[j];
                stack[j]=temp;
            swap=1;
            }
        }
        if(swap==0)
            {
                break;
            }
   }
    printf("\nThe number in ascending order is : ");
    for(i=0;i<=top;i++)
    {
    printf("\t%d <",stack[i]);
    }

   break;
case 2:

       for(i=0;i<top;i++)
    {
        swap=0;
        for(j=0;j<(top);j++)
        {
            if(stack[j]<stack[j+1])
            {
                temp=stack[j+1];
                stack[j+1]=stack[j];
                stack[j]=temp;
            swap=1;
            }
        }
        if(swap==0)
            {
                break;
            }
   }
    printf("\nThe number in ascending order is : ");
    for(i=0;i<=top;i++)
    {
    printf("\t%d >",stack[i]);
    }

    break;
default:
    printf("\nYou enter wrong.");
    }
}
