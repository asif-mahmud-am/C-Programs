#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("Enter number: ");
    scanf("%d", &n);
    sum = 0;
    for(i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    printf("The summation of numbers %d\n", sum);



    return 0;
}
