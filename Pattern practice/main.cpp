

#include<stdio.h>
#include<conio.h>
int main()
{
    char a,b,c,ch[30];
    int num,n,arr,i,j,k,l,m;
    //printf("Enter the number of character : ");
    //scanf("%d",&num);
    printf("Enter the characters : \n");
    scanf("%c",&a);
    printf("Enter the characters : \n");
    scanf("%c",&b);
    printf("Enter the characters : \n");
    scanf("%c",&c);
    n=7;
    //printf("enter the character :");
    //for(arr=0;arr<num+1;arr++)
    //{
      //  scanf("%c",&ch[arr]);
   // }
    //for(arr=0;arr<num+1;arr++)
    //{
        for(i=1;i<=n;i++)
        {
           if(a=='a' || b=='a' || c=='a')
            {
                for(j=1;j<=n;j++)
                {
                    if(i==1 || j==1 || j==n || i==n/2+1)
                    {
                        printf("A");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
              // printf("\n");
            }
            else if(b=='b' || a=='b' || c=='b')
            {
                 for(k=1;k<=n;k++)
                {
                    if(i==1 || k==1 || k==n || i==n || i==n/2+1)
                    {
                        printf("B");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
               // printf("\n");
            }
            else if(c=='c' || b=='c' || c=='c')
            {
                 for(l=1;l<=n;l++)
                {
                    if(i==1 || l==1 || i==n)
                    {
                        printf("C");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                //printf("\n");
            }
            else //if(ch[arr]=='d')
            {
                 for(m=1;m<=n;m++)
                {
                    if(i==1 || m==1 || m==n || i==n)
                    {
                        printf("D");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
              //  printf("\n");
            }
            printf("\n");
        }
      // printf("\n");
//}
  return(0);
}
