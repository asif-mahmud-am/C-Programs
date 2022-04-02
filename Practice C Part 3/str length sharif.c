///string length
#include<stdio.h>
int main()
{
    char ch[100];
    gets(ch);
    int length;

    for(length=0; ch[length]!= '\0' ; length++);
    printf("%d\n", length);


    return 0;
}
