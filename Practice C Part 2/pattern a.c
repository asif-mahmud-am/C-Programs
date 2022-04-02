#include<stdio.h>
int main()
{
{
int i,j;
for(i=0;i<=8;i++)
{
for(j=0;j<=8;j++)
{
if(i<=8 && j==0)
printf("*");
if(i==0 && j<=3)
printf("*");
else printf(" ");
if(i==4 && j<=3)
printf("*");
else printf(" ");
if(i<=8 && j==3)
printf("*");
}
printf("\n");
}
}
{
    int i,j;
    for(i=0;i<=8;i++)
    {
    for(j=0;j<=8;j++)
    {
    if(i<=8 && j==0)
        printf("*");
    if(i==8 && j<=6)
        printf("*");
    else printf(" ");
    }
    printf("\n");
    }
}
{
    int i,j;
    for(i=0;i<=8;i++)
    {
    for(j=0;j<=8;j++)
    {
    if(i<=8 && j==0)
        printf("*");
    if(i==8 && j<=6)
        printf("*");
    else printf(" ");
    }
    printf("\n");
}
}
{
int i,j;
for(i=0;i<=8;i++)
{
for(j=0;j<=8;j++)
{
if(i<=8 && j==0)
printf("*");
if(i==0 && j<=3)
printf("*");
else printf(" ");
if(i==4 && j<=3)
printf("*");
else printf(" ");
if(i<=8 && j==3)
printf("*");
}
printf("\n");
}
}
{
    int i,j;
    for(i=0;i<=8;i++)
    {
    for(j=0;j<=8;j++)
    {
    if(i<=8 && j==0)
        printf("*");
    if(i==4 && j<=5)
        printf("*");
    else printf(" ");
    if(i<=8 && j==5)
        printf("*");
    }
    printf("\n");
    }
}
return 0;
}
