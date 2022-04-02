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
            sum += value(j);
            }
    }
    printf("%d\n",sum);
}

int value(int j)
{
    int k,num=1;
   if(j==0)
   {
       return 1;
   }
   else

    {
        for(k=1;k<=j;k++)
    {
        num *= 2;
    }
    return num;
    }
}
