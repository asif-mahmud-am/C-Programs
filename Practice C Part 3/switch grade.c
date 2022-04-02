#include<stdio.h>
int main()
{
    char grade;
    scanf("%c", &grade);


    switch(grade){
    case 'A':
       printf("Well done\n");
       break;
    case 'B':
    case 'C':
        printf("Good\n");
        break;
    case 'D':
        printf("better luck next time\n");
        break;
    case 'F':
        printf("Failed\n");
        break;
    default:
        printf("invalid grade\n");
       break;

    }
  printf("Your grade is %c\n", grade);


    return 0;
}
