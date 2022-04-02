///ascii addition///
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, sum=0;
    gets(str);


    for(i=0; i<strlen(str); i++)
    {
      sum = sum + (int)str[i];
    }
     printf("%d\n", sum);

    return 0;
}
