/* c program to display all alphabets using ASCII value */
#include<stdio.h>
int main()
{
    int i;


    for(i=97; i<=122; i++)
    {
        printf("%c\n", &i);
    }



    return 0;

}
