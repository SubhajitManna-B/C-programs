//


#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    char fp[20],sp[20];
    printf("ENTER INTO THE GAMING WORLD\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",arr[i][j]);
        }
        printf("\n");
        printf("\t------------------\n");
    }
    printf("Enter the first participant name : ");
    scanf("%s",&fp[20]);
    printf("Enter the Second participant name : ");
    scanf("%s",&sp[20]);
    for(k=0;k<5;k++)
    {
       printf("%s enter your first choice : ",fp);
       scanf("%d",&one);
       for(l=1;l<k;l++)
        {
         if(one!=second[l]);
         {

         }
        }
    }
    return(0);
}
