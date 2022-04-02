#include<stdio.h>
int main()
{
    int marks;
    scanf("%d", &marks);

    switch(marks/){
  case 100:
  case 95:
  case 90:
  case 85:
  case 80:
    printf("your grade is A+");
    break;
  case 75:
    printf("Your grade is A");
    break;
  case 70:
    printf("your grade is A-");
    break;
  case 65:
    printf("your grade is B+");
    break;
  case 60:
    printf("your grade is B");
    break;
  case 55:
  case 50:
    printf("your grade is C");
    break;
  case 45:
  case 40:
    printf("your grade is D");
    break;
  default:
    printf("failed");
    break;
    }





    return 0;
}
