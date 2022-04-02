#include<stdio.h>
int main()
{
    double x, y, x_plus_y, x_minus_y;

    printf("Enter X + Y = ", x_plus_y);
    scanf("%lf", &x_plus_y);

    printf("Enter X - Y = ", x_minus_y);
    scanf("%lf", &x_minus_y);

    x = (x_plus_y + x_minus_y) / 2;

    y = (x_plus_y - x_minus_y) / 2;

    printf("x = %.2lf  y = %.2lf\n", x, y);

    return 0;
}
