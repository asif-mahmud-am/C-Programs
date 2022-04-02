// Return value & function prototype
#include<stdio.h>
int abs(int a, int b);
int add(int a, int b);

int main()
{
    printf("%d\n", abs(5,6));
    return 0;
}

int abs(int a, int b)
{
    int ad = add(a,b);
    if(ad<0)
        return -ad;
    else
        return ad;
}


int add(int a, int b)
{
    return a+b;
}
