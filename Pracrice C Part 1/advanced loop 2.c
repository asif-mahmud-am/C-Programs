#include<stdio.h>
int main()
{
    int a,b,sum;

    while (scanf("%d%d", &a, &b) != EOF){ /*control+Z=EOF*/
        if(a==0 && b==0)
            return 0;
        sum=a+b;
        printf("%d",sum);
    }




    return 0;
}

