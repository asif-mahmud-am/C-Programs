///Write a program which will take an integer input and display its equivalent binary number///
#include<stdio.h>
int main()
{
    int a,i,j;
    int b[20];
    scanf("%d", &a);



    for(i=0;a>0;i++)
    {
        b[i] = a % 2;
        a = a / 2;
    }

    for(j=i-1; j>=0; j--)
    {
        printf("%d",b[j]);
    }





    return 0;
}
