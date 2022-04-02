#include<stdio.h>
int main()
{
    double v,t,d;

    printf("enter velocity 'v' =  ");
    scanf("%lf", &v);
    printf("enter time 't' =  ");
    scanf("%lf", &t);

    d = 2 * v * t;

    printf("distance after 2t time is %.2lf m\n", d);



    return 0;
}
