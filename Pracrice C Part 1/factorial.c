#include<stdio.h>
int main()
{
    int i,n,fact;
    int j = 1;
    scanf("%d", &n);
    if(n==0 || n==1)
        printf("%d", j);

    else
    for(i=1;i<=n;i++)
    {
        fact = fact * i;

    }
    printf("%d", fact);


    return 0;
}
