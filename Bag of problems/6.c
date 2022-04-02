#include<stdio.h>
int main()
{
int i,y;
char d[13];
for(i=0; i<11; i++){
scanf("%c",&d[i]);
}
d[2]='-';
d[5]='-';
for(i=0; i<11; i++){
printf("%c",d[i]);
}
}
 return 0;
