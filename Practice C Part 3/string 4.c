/// string Input (closer look of gets(), scanf(), puts() )
#include<stdio.h>
int main()
{
    char str[100];

    scanf("%s%*c", str);
    //gets(str);
    printf("%s\n", str);

    gets(str);
    printf("%s\n", str);

    gets(str);
    printf("%s\n", str);


    return 0;
}
