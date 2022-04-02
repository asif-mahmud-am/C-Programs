#include <stdio.h>
int main()
{
    int i,j,k=0;
    for(i=1;i<=10;i++,k=0)
    {
        for(j=1;j<=10-i;j++)
        {
            printf(" ");
        }
        while(k != 2*i-1)
        {
            printf("*");
            k++ ;
        }
        printf("\n");
    }
    return 0;
}
