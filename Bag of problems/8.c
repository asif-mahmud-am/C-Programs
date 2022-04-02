///write a program that take farenheit and display celsius ///
#include<stdio.h>
int main()
{
   float f,c;
   printf("enter temperature in farenheit:  ");
   scanf("%f", &f);

   c = 5 * ((f-32) / 9);

   printf("The temperature in celsius is: %.2f\n", c);


   return 0;
}
