#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,length=0,sum=0;
    char str[300];

    scanf("%s",str);

    length = strlen(str);

    for(i=0,j=length-1;i<length,j>=0;i++,j--)
    {
        if(str[i] == '0')
        {
            continue;
        }
        else
        {
            sum = sum + binary(j) ;
        }
    }
    printf("%d\n",sum);
}

int binary(int j)
{
    int k=0,n=1;
    if(j==0)
    {
        return 1;
    }
    else
    {
    for(k=0;k<j;k++){
     n = n*2;
    }
    }
     return n;
}
