///Write a program that read two integer and display remainder///
#include<stdio.h>
int main()
{
    int i,j, remainder;

    printf("enter two numbers: ");
    scanf("%d%d",&i,&j);

    if(i>j)
    {
        remainder = i % j;
    }
    else
    {
        remainder = j % i;
    }
    printf(" remainder is : %d\n", remainder);


    return 0;
}
