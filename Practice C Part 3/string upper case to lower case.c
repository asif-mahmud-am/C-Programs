///lower case to upper case
#include<stdio.h>
int main()
{
    char country[] = {'b', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h' };
    int i, length;
    length = 10;
    printf("%s\n", country);

    for(i=0; i<=length; i++)
    {
        if (country[i]>=97 && country[i]<=122)
        {
            country[i]= 'A' + (country[i] - 'a');
        }
    }
    printf("%s\n", country);

    return 0;
}
