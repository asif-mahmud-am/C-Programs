#include <stdio.h>
int main()
{
    int a = 10;
    int i=1,j=0,k;

    while(a != 0)
    {
        k = a%2 ;
        a=a/2;
        j = j+ k*i;
        i *= 10; ;
    }
    printf("%d\n",j);
    return 0;
}
