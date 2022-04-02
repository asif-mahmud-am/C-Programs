#include<stdio.h>
int main()
{

  int a, arr[9999], i;
  scanf("%d", &a);
  for(i=0; ;i++)
  {
      arr[i] = a%2;
      a = a/2;
      if(a==0)
      {
          break;
      }
  }
    for(; i>=0; i--)
    {
        printf("%d", arr[i]);
    }







    return 0;
}
