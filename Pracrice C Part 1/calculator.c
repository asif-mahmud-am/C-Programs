#include<stdio.h>
int main()
{
    int a,b,result;
    char sign;
    double;


    scanf("%d %d", &a, &b);
    result = a + b;
    sign = '+';
    printf("%d %c %d = %d\n",a, sign,b, result);
    result = a - b;
    sign = '-';
    printf("%d %c %d = %d\n",a, sign,b, result);
    result = a * b;
    sign = '*';
    printf("%d %c %d = %d\n",a, sign,b, result);
    result = a / b;
    sign = '/';
    printf("%d %c %d = %d\n",a, sign,b, result);




    return 0;
}
