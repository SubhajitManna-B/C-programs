//

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
int font=-1;
int rear=-1;
int q[MAX];
int main()
{
    int ch;
    void insertion();
    void deletion();
    void traverse();
    while(1)
    {
        printf("\n\n->Enter 1 for insert\n");
        printf("\n->Enter 2 for delete\n");
        printf("\n->Enter 3 for display\n");
        printf("\n->Enter 4 for Exit\n");
        printf("\n->Enter your choice :\t");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insertion();
            break;
            case 2: deletion();
            break;
            case 3: traverse();
            break;
            case 4: exit(1);
            default:
                printf("\nYou entered wrong choice");
        }
    }
    return(0);
}
void insertion()
{
    int item;
    if(rear<MAX-1)
    {
        if(rear==-1)
        {
            rear=rear+1;
            font=font+1;
        }
        else
        {
            rear=rear+1;
        }
        printf("\nEnter the item : ");
        scanf("%d",&item);
        q[rear]=item;
    }
    else
    {
        printf("\nQueue is full");
    }
}
void deletion()
{
    if(font>-1)
    {
        printf("\nThe deleted item is : %d",q[font]);
        if(font==rear)
        {
            font=-1;
            rear=-1;
        }
        else
        {
            font=font+1;
        }
    }
    else
    {
        printf("\nQueue is empty");
    }
}
void traverse()
{
    if(font>-1)
    {
    int i;
    printf("\nThe items are : ");
    for(i=font;i<=rear;i++)
    {
        printf("\t%d",q[i]);
    }
    }
    else
    {
        printf("\nQueue is empty");
    }
}
