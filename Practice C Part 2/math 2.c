#include<stdio.h>
int main()
{
    double a1,a2,b1,b2,c1,c2,x,y,d;

    printf("enter a1: ");
    scanf("%lf", &a1);
    printf("enter a2: ");
    scanf("%lf", &a2);
    printf("enter b1: ");
    scanf("%lf", &b1);
    printf("enter b2: ");
    scanf("%lf", &b2);
    printf("enter c1: ");
    scanf("%lf", &c1);
    printf("enter c2: ");
    scanf("%lf", &c2);
    d = a1 * b2 - a2 * b1;
    if((int) d == 0)
    {
        printf("The value of x & y can not be defined");
    }

    x = (b2 * c1 - b1 * c2) / d;
    y = (a1 * c2 - a2 * c1) / d;

    printf("x = %.2lf  y = %.2lf\n", x,y);


    return 0;
}
