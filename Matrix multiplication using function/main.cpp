//Multiplication of two matrix using function


#include<stdio.h>
#include<conio.h>
int main()
{
    int r1,c1,r2,c2,loop1,loop2,loop3;
    int first[10][10],second[10][10];
    int matmul(int first[][10],int second[][10],int r1,int c1,int r2,int c2);
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
        printf("\nThe number of row of second matrix is not match with the column of first matrix.\n");
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
    matmul(first,second,r1,c1,r2,c2);
    return(0);
}

    int matmul(int first[][10],int second[][10],int r1,int c1,int r2,int c2)
 {
     int sum=0,mult[10][10],loop1,loop2,loop3;
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
     printf("The multiplication of two matrix is : \n\n");
      for(loop1=0;loop1<r1;loop1++)
    {
        for(loop2=0;loop2<c2;loop2++)
        {
            printf("\t%d",mult[loop1][loop2]);
        }
         printf("\n");
    }
}


