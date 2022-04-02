///Write a program that read any character and display its ASCII value.///
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);

    printf("ascii value of %c is %d", ch,ch);


    return 0;
}

