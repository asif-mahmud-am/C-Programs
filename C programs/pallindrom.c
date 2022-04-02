#include <stdio.h>
#include <string.h>

int main()
{
    int i=0,j=0,length=0;
    char str1[300];

    gets(str1);

    length = strlen(str1);

    for(i=0;i<=length-1;i++)
    {
         if(str1[i] == str1[length-1])
            {
              length-- ;
            }
         else if(str1[i] != str1[length-1])
            {
              printf("Not pallindrome\n");
              return 0;
            }
    }
          printf("Pallindrome\n");
          return 0;
}
