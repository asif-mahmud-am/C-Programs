#include<stdio.h>
int main()
{
    int i,j,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N+1;j++)
        {
            if(j==1 || j==N)
            {
                printf("*");
            }
            else if(j==N+1)
            {
                printf(" ");
            }
            else if(i!=1 || i!=N)
            {
                if(i==j)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                printf(" ");
            }
        }
        for(j=N+2;j<=((2*N)+1);j++)
        {
            if(i==1 || i==((N/2)+1) || i==N)
            {
                printf("*");
            }
            else if(i<=N/2)
            {
                if(j==N+2)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if(j==((2*N)+1))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        for(j=((2*N)+2);j<=((2*N)+2);j++)
        {
            printf(" ");
        }
        for(j=((2*N)+3);j<=((3*N)+2);j++)
        {
            if(i==1)
            {
                printf("*");
            }
            else
            {
                if(j==((2*N)+2)+(N/2)+1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        for(j=((3*N)+3);j<=((3*N)+3);j++)
        {
            printf(" ");
        }
        for(j=((3*N)+4);j<=((4*N)+3);j++)
        {
            if(i==N)
            {
                printf("*");
            }
            else
            {
                if(j==((3*N)+4) || j==((4*N)+3))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}



