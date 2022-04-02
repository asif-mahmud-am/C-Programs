/// Simple input output program
/** Take strings as input and print them.
     Sample input:            Sample output:
     NSTU                      NSTU
     NOakhali                  Noakhali
     asif                      asif
     */
#include<stdio.h>
int main()
{

    char ch[100];


    while(gets(ch))
    {
       if(ch[0] == '\0')
        return 0;
        printf("%s\n", ch);
    }





    return 0;
}


