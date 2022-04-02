#include<stdio.h>
int main()
{
    double farenheit, celsius;

    printf("Enter temperature in celsius: ");
    scanf("%lf", &celsius);

    farenheit = 1.8 * celsius + 32;

    printf("The temperature in farenheit is %.2lf", farenheit);


    return 0;
}
