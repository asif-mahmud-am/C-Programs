#include<stdio.h>
#include<string.h>
int main()
{
  int x=10, *p;
  p = &x;
  *p = 20;
  printf("%d %d", x, *p);
  return 0;
}

