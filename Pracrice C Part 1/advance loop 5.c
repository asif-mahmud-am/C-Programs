#include<stdio.h>
int main()
{
    int a,b,sum,n,i,j,T;
    scanf("%d", &T);


    for(j=1; j<=T; j++){
            scanf("%d", &n);
    sum = 0;
    for(i=1; i<=n; i++){
        scanf("%d", &a);
        sum = sum + a;
    }
    printf("Case#%d : %d\n",j, sum);
    }





   return 0;
}


