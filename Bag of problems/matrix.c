#include<stdio.h>
int main()
{
    int i=0, j=0;
    int mat1[2][2];
    int mat2[2][2];
    int sum[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0; j<2;j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0; j<2;j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    for(i=0; i<2;i++)
    {
        for(j=0; j<2;j++)
        {
            sum [i][j] = mat1[i][j] + mat2[i][j];
        }

    }
    printf("\n\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }







    return 0;
}
