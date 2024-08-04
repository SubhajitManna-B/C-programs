// Students details using structure.

#include<stdio.h>
#include<conio.h>
struct student
{
    int roll;
    char name[20];
    int marks;
}bca[5];
int main()
{
    struct student bca[5];
    int i,j;
    printf("Enter the details for 5 students :\n");
    for(i=1;i<=5;i++)
    {
        printf("\nEnter the roll no. of %d student :",i);
        scanf("%d",&bca[i].roll);
        printf("\nEnter the name of %d student :",i);
        scanf("%s",&bca[i].name);
        printf("\nEnter the marks of 5 subjects of %d student :",i);
        for(j=1;j<=5;j++)
        {
            printf("\nEnter the marks of %d subject :",j);
            scanf("%d",&bca[j].marks);
        }
    }
    printf("\nThe students details are : ");
    for(i=1;i<=5;i++)
    {
        printf("\nThe roll number of %d students is : %d",i,bca[i].roll);
        printf("\nThe name of %d student is : %s",i,bca[i].name);
        printf("\n The marks of 5 subject of %d student is : ",i);
        for(j=1;j<=5;j++)
        {
            printf("\n The marks of %d subject is : %d",j,bca[j].marks);
        }
    }
    return(0);
}
