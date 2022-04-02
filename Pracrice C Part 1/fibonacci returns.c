#include<stdio.h>
int main()
{

    int a, b,c,n,i,T;
    scanf("%d", &T);

    while(T--){
    scanf("%d",&n);


    for(i=1; i<=n; i++)
    {
        a = 0;
        b = 1;
        if(i == n)
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("%d ", c);
    }




    return 0;
}
