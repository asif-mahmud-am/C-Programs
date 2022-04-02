// print all even number between 1 & 100 using while loop//
#include<stdio.h>
int main()
{
    int i;

   i = 0;
   while(i<=100)
   {
       if(i%2==0)
        printf("%d\n", i);
       i++;
   }

    return 0;
}
