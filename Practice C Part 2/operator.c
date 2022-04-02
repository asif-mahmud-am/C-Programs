#include<stdio.h>
int main()
{
    int math, physics, eligibility;
    printf("enter your gpa in math:",math);
    scanf("%d", &math);
    printf("enter your gpa in physics: ", physics);
    scanf("%d", &physics);
    eligibility = (math==5 && physics==5);
    if ( eligibility==1 )
        printf("you are eligible");
    else
        printf("you are not eligible");




return 0;

}
