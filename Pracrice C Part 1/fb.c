#include<stdio.h>
int main()
{
    int i, sum=0;

    for(i=0;i<100;i=i+3)
    {
      sum = sum + i;
    }
    printf("sum = %d\n", sum);

    return 0;
}
