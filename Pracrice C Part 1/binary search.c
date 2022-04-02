
#include <stdio.h>

int main()
{
   int c, first, last, middle, n, search ;
  int  array[100]={12,23,34,35,67,89,99};

   printf("Enter value to find\n");
   scanf("%d", &search);

   first = 0;
   last = n - 1;
   middle = (first+last)/2;

   while (first <= last) {
         if (array[middle] == search) {
         printf("%d found at location %d.\n", search, middle+1);
         break;
      }
      else if (array[middle] < search)
         first = middle + 1;

      else
         last = middle - 1;

      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d isn't present in the list.\n", search);

   return 0;
}
