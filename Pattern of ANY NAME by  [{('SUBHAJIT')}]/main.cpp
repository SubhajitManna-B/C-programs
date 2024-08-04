//Pattern of any name

#include<stdio.h>
#include<conio.h>
int main()
{
    char ch[50];
    int num,n,arr,i,j,k,s,t,lap;
    printf("Enter the number of character of your name and (press enter) : ");
    scanf("%d",&num);
    n=7;
    //s=n/2+1;
    //t=n/1;
    printf("Write your name :");
    for(arr=0;arr<num+1;arr++)
    {
        scanf("%c",&ch[arr]);
    }
    for(arr=0;arr<num+1;arr++)
    {
        for(i=1;i<=n;i++)
        {

            if(ch[arr]=='a')
            {
                for(j=1;j<=n;j++)
                {
                    if(i==1&&j>=2&&j<=6 || j==1&&i>=2 || j==n&&i>=2 || i==n/2+1)
                    {
                        printf("A");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            else if(ch[arr]=='b')
            {
                 for(j=1;j<=n;j++)
                {
                    if(i==1&&j<=6 || j==1 || j==n&&i<=6&&i>=2 || i==n&&j<=6 || i==n/2+1)
                    {
                        printf("B");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            else if(ch[arr]=='c')
            {
                 for(j=1;j<=n;j++)
                {
                    if(i==1 || j==1 || i==n || i==2&&j>=6)
                    {
                        printf("C");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            else if(ch[arr]=='d')
            {
                 for(j=1;j<=n;j++)
                {
                    if(i==1&&j<=6 || j==1 || j==n&&i<=6&&i>=2 || i==n&&j<=6)
                    {
                        printf("D");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            else if(ch[arr]=='e')
            {
                 for(j=1;j<=n;j++)
                {
                    if(i==1 || j==1 || i==n || i==n/2+1)
                    {
                        printf("E");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            else if(ch[arr]=='f')
            {
                 for(j=1;j<=n;j++)
                {
                    if(i==1 || j==1 || i==n/2+1)
                    {
                        printf("F");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            else if(ch[arr]=='g')
            {
                 for(j=1;j<=n;j++)
                {
                    if(i==1&&j>=3 || i==2&&j==2 || j==1&&i>=3 || i==7&&j<=4 || j==4&&i>=4 || i==4&&j>=4 || j==7&&i>=4)
                    {
                        printf("G");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");

            }
            else if(ch[arr]=='h')
            {
                for(j=1;j<=n;j++)
                {
                    if(j==1 || j==n || i==n/2+1)
                    {
                        printf("H");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            else if(ch[arr]=='i')
            {
                 for(j=1;j<=n;j++)
                {
                    if(i==1 || i==n || j==n/2+1)
                    {
                        printf("I");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            else if(ch[arr]=='j')
            {
                 for(j=1;j<=n;j++)
                {
                    if(  i==1 || j==n || i==n&&j>=2 || j==2&&i>=5 || j==4&&i>=5 || j==3&&i==5)
                    {
                        printf("J");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            else if(ch[arr]=='k')
            {
                for(j=1;j<=n;j++)
                {
                    if(j==1 || i==3&&j==3 || i==2&&j==4 || i==1&&j==5 || i==4&&j==2 || i==5&&j==3 || i==6&&j==4 || i==n&&j==5)
                    {
                        printf("K");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            else if(ch[arr]=='l')
            {
                for(j=1;j<=n;j++)
                {
                    if(j==1 || i==n)
                    {
                        printf("L");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        else if(ch[arr]=='m')
            {
                for(j=1;j<=n;j++)
                {
                    if(j==1 || j==n || i==1&&j==2 || i==2&&j==3 || i==3&&j==4 || i==2&&j==5 || i==1&&j==6)
                    {
                        printf("M");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        else if(ch[arr]=='n')
            {
                for(j=1;j<=n;j++)
                {
                    if(j==1 || i==j || j==n)
                    {
                        printf("N");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        else if(ch[arr]=='o')
            {
                for(j=1;j<=n;j++)
                {
                    if(j==1 || j==n || i==1 || i==n)
                    {
                        printf("O");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        else if(ch[arr]=='p')
            {
                for(j=1;j<=n;j++)
                {
                    if(j==1 || i==1&&j<=5 || j==5&&i<=4 || i==4&&j<=5)
                    {
                        printf("P");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
           }
       else if(ch[arr]=='q')
            {
                for(j=1;j<=n;j++)
                {
                    if(j==1&&i<=6 || j==6&&i<=6 || i==1&&j<=6 || i==6&&j<=6 || i==5&&j==3 || j==4&&i>=5 || i==n&&j>=4)
                    {
                        printf("Q");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        else if(ch[arr]=='r')
            {
                for(j=1;j<=n;j++)
                {
                    if(j==1 || i==1&&j<=5 || j==5&&i<=4 || i==4&&j<=5 || i==5&&j==2 || i==6&&j==3 || i==n&&j==4)
                    {
                        printf("R");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        else if(ch[arr]=='s')
            {
                for(j=1;j<=n;j++)
                {
                    if(j==1&&i<=4 || j==n&&i>=4 || i==n/2+1 || i==1 || i==n)
                    {
                        printf("S");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        else if(ch[arr]=='t')
            {
                for(j=1;j<=n;j++)
                {
                    if( i==1 || j==n/2+1)
                    {
                        printf("T");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        else if(ch[arr]=='u')
            {
                for(j=1;j<=n;j++)
                {
                    if(j==1 || j==n || i==n)
                    {
                        printf("U");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        else if(ch[arr]=='v')
            {
                for(j=1;j<=n;j++)
                {
                    if( i==4&&j==1 || i==5&&j==2 || i==6&&j==3 || i==n&&j==4 || i==6&&j==5 || i==5&&j==6 || i==4&&j==n)
                    {
                        printf("V");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        else if(ch[arr]=='w')
            {
                for(j=1;j<=n;j++)
                {
                    if(j==1 || j==n || i==6&&j==2 || i==5&&j==3 || i==4&&j==4 || i==5&&j==5 || i==6&&j==6)
                    {
                        printf("W");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        else if(ch[arr]=='x')
            {
                for(j=1;j<=n;j++)
                {
                    if(j==i || j+i==n+1)
                    {
                        printf("X");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        else if(ch[arr]=='y')
            {
                for(j=1;j<=n;j++)
                {
                    if(i==1&&j==1 || i==2&&j==2 || i==3&&j==3 || i==3&&j==5 || i==2&&j==6 || i==1&&j==n || j==4&&i>=4)
                    {
                        printf("Y");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        else if(ch[arr]=='z')
            {
                for(j=1;j<=n;j++)
                {
                    if(i==1 || i==n || i+j==n+1)
                    {
                        printf("Z");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        else if(ch[arr]=='+')
        {
            for(j=1;j<=n;j++)
            {
                if(i==(n/2)+1 || j==(n/2)+1)
                {
                    printf("+");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
         else if(ch[arr]=='*')
        {
            for(j=1;j<=n;j++)
            {
                if(i==(n/2)+1 || j==(n/2)+1 || i==j || i+j==n+1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
                else if(ch[arr]=='0')
            {
                for(j=1;j<=n;j++)
                {
                    if(j==1 || j==n || i==1 || i==n)
                    {
                        printf("0");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
         else if(ch[arr]=='1')
        {
            for(j=1;j<=n;j++)
            {
                if(j==(n/2)+1 || i==n&&j>=2&&j<=6 || i==1&&j==3 || i==2&&j==2)
                {
                    printf("1");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
         else if(ch[arr]=='2')
        {
            for(j=1;j<=n;j++)
            {
                if(i==1&&j<=5 || j==5&&i<=5 || i==5&&j<=5 || j==1&&i>=5 || i==n)
                {
                    printf("2");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
         else if(ch[arr]=='3')
        {
            for(j=1;j<=n;j++)
            {
                if(j==5 || i==1&&j<=5 || i==(n/2)+1&&j<=5 || i==n&&j<=5)
                {
                    printf("3");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
          else if(ch[arr]=='4')
        {
            for(j=1;j<=n;j++)
            {
                if(j==5 || i==1&&j==4 || i==2&&j==3 || i==3&&j==2 || i==5 || i==4&&j==1)
                {
                    printf("4");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
          else if(ch[arr]=='5')
        {
            for(j=1;j<=n;j++)
            {
                if(i==1 || j==1&&i<=3 || i==3 || j==n&&i>=3 || i==n || j==1&&i>=6)
                {
                    printf("5");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
          else if(ch[arr]=='6')
        {
            for(j=1;j<=n;j++)
            {
                if(i==1 || j==1 || i==n || j==n&&i>=(n/2)+1 || i==(n/2)+1)
                {
                    printf("6");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
          else if(ch[arr]=='7')
        {
            for(j=1;j<=n;j++)
            {
                if(i==1 || i+j==n+1)
                {
                    printf("7");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
          else if(ch[arr]=='8')
        {
            for(j=1;j<=n;j++)
            {
                if(i==1 || j==1 || i==n || j==n || i==(n/2)+1)
                {
                    printf("8");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
          else if(ch[arr]=='9')
        {
            for(j=1;j<=n;j++)
            {
                if(i==1 || j==n || i==3 || j==1&&i<=3)
                {
                    printf("9");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        else
            {
                for(j=1;j<=n;j++)
                {
                    printf(" ");
                }
                printf("\n");
            }
        }
        printf("\n");
     }
  return(0);
}
//end
