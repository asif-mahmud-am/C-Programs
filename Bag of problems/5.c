///Write a program that read any upper case character and display in lower case///
#include<stdio.h>
int main()
{
    char ch;

    printf("enter a letter of uppercase: ");
    scanf("%c", &ch);
    ch = ch + 32;

    printf("the lower case letter is: %c", ch);


    return 0;
}
