///take two input and swap them///
#include<stdio.h>
int main()
{
    int num1, num2, temp;
    printf("enter num1: ");
    scanf("%d", &num1);
    printf("enter num2: ");
    scanf("%d", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("num1= %d\n", num1);
    printf("num2= %d\n", num2);


    return 0;
}
