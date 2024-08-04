//

#include<stdio.h>
#include<conio.h>
int main()
{
    int max;
    int push(int max);
    printf("Enter the number of elments : ");
    scanf("%d",&max);
    push(max);
    return(0);
}
    int push(int max)
    {
        int top=-1,item,i,stack[10];
        while(top<max-1)
       {
           if(top<max-1)
           {
            top=top+1;
            printf("Enter the item : ");
            scanf("%d",&item);
            stack[top]=item;
           }
           else
            {
                printf("Stack is overflow\n");
            }
       }
        printf("Display the elements : \n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
