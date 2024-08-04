//Singly link list.....


#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
int info;
struct node *link;
};
struct node *start;
void create_list(int data);
void add_list(int data,int pos);
void count();
void display();
int main()
{
int ch,n,m,pos,i;
start=NULL;
while(1)
{
printf("\n1. Create list\n");
printf("2. Add into list\n");
printf("3. Display list\n");
printf("4. Count node\n");
printf("5. Quit\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
       printf("Enter how many node wii be create\n");
       scanf("%d",&n);
       for(i=0;i<n;i++)
       {
	 printf("Enter the value of node:\n");
	 scanf("%d",&m);
	 create_list(m);
       }
       break;
case 2:
       printf("Enter the inserted element\n");
       scanf("%d",&m);
	 printf("Enter the inserted position:\n");
	 scanf("%d",&pos);
	 add_list(m,pos);
       break;
case 3:
       display();
       break;
case 4:
       count();
       break;
case 5:
       exit(0);
default:
     printf("wrong choice");
} // end switch
}// end while
}//end main
void create_list(int data)
{
struct node *q,*temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->info=data;
temp->link=NULL;
if(start==NULL)
   start=temp;
else
{
q=start;
while(q->link!=NULL)
   {
   q=q->link;
   }
q->link=temp;
}//end else
}//end create list

void add_list(int data,int pos)
{
struct node *temp,*q;
int i;
q=start;
for(i=0;i<pos;i++)
 {
  q=q->link;
  if(q==NULL)
  {
   printf("insertion is not possible");
   }// end if
 }// end for
temp=(struct node*)malloc(sizeof(struct node));
temp->link=q->link;
temp->info=data;
q->link=temp;
}//end function
void count()
{
 struct node *q=start;
 int c=0;
 while(q!=NULL)
 {
 q=q->link;
 c++;
 }//end while
 printf("number of node=%d",c);
 }// end count

void display()
{
struct node *q;
if(start==NULL)
{
printf("list is empty");
}
q=start;
printf("list is:\n");
while(q!=NULL)
{
printf("%d -> ",q->info);
q=q->link;
}//end while
}// end display
