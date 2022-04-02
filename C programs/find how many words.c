#include <stdio.h>
#include <string.h>
int main()
{
    //given word is muna
    int i=0,M=0,U=0,N=0,A=0,length = 0,MINIMUM=0;
    char str[] = "mdhafdteuagfamafhnajdgdmhsdugajgdhdnsjdgsudjsgsmsgsa";
    //gets(str);
    length = strlen(str);
    for(i=0;i<=length-1;i++)
    {
        if(str[i] == 'm')
        {
            M++;
        }
        else if(str[i]== 'u')
        {
            U++;
        }
        else if(str[i] == 'n')
        {
            N++;
        }
        else if(str[i]== 'a')
        {
            A++;
        }
    }
    if(M<U && M<N && M<A)
    {
      MINIMUM = M;
    }
    else if(U<M && U<N && U<A)
    {
        MINIMUM = U;
    }
    else if(N<M && N<U && N<A)
    {
        MINIMUM = N;
    }
    else
        {
        MINIMUM = A;
        }
    printf("M = %d\nU=%d\nN= %d\nA=%d\n%d",M,U,N,A,length);
    printf("The given word(muna) can be printed properly maximum %d times\n",MINIMUM);

    return 0;
}
