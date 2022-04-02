#include<stdio.h>
int main()
{
    int array[100], i,j,key,n,loc,ck;


   scanf("%d", &n);
   for(i=0; i<n; i++)
   {
    scanf("%d", &array[i]);
   }
   scanf("%d", &key);
   for(i=0; i<n; i++) {
    if(array[i]==key)
       {
           ck = 1;
           loc = i + 1;
           break;
       }
   }
   if(ck == 1)
        printf("%d", loc);
   else
        printf("NO" );

    return 0;
}
