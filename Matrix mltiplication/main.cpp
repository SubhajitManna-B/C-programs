//Multiplication of two matrix


#include<stdio.h>
#include<conio.h>
int main()
{
    int r1,c1,r2,c2,loop1,loop2,loop3,sum=0;
    int first[10][10],second[10][10],mult[10][10];
    printf("Enter the number of row and column of first matrix : \n");
    scanf("%d  %d",&r1,&c1);
    printf("Enter the values of first matrix : \n");
    for(loop1=0;loop1<r1;loop1++)
    {
        for(loop2=0;loop2<c1;loop2++)
        {
            scanf("%d",&first[loop1][loop2]);
        }
    }
    start:
    printf("Enter the number of row and column of second matrix : \n");
    scanf("%d  %d",&r2,&c2);
    if(c1!=r2)
    {
        printf("\nThe number of row of second matrix are not match with the column of first matrix.\n");
        printf("Enter the correct number of row and column\n");
        goto start;
    }
    printf("Enter the values of second matrix : \n");
      for(loop1=0;loop1<r2;loop1++)
    {
        for(loop2=0;loop2<c2;loop2++)
        {
            scanf("%d",&second[loop1][loop2]);
        }
    }
    printf("The first matrix is : \n\n");
     for(loop1=0;loop1<r1;loop1++)
    {
        for(loop2=0;loop2<c1;loop2++)
        {
            printf("\t%d",first[loop1][loop2]);
        }
         printf("\n");
    }
    printf("The second matrix is : \n\n");
     for(loop1=0;loop1<r2;loop1++)
    {
        for(loop2=0;loop2<c2;loop2++)
        {
            printf("\t%d",second[loop1][loop2]);
        }
        printf("\n");
    }
     for(loop1=0;loop1<r1;loop1++)
    {
        for(loop2=0;loop2<c2;loop2++)
        {
         for(loop3=0;loop3<r2;loop3++)
         {
             sum=sum+first[loop1][loop3]*second[loop3][loop2];
         }
         mult[loop1][loop2]=sum;
         sum=0;
        }
     }
     printf("The multiplication of two matrices is : \n\n");
      for(loop1=0;loop1<r1;loop1++)
    {
        for(loop2=0;loop2<c2;loop2++)
        {
            printf("\t%d",mult[loop1][loop2]);
        }
         printf("\n");
    }
    return(0);
}

