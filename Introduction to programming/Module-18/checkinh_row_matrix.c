#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d%d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // if(r==1)
    // {
    //     printf("ROW MATRIX");
    // }
    // else
    // {
    //     printf("NOT ROW MATRIX");
    // }
    // //column matrix
    // if(c==1)
    // {
    //     printf("column MATRIX");
    // }
    // else
    // {
    //     printf("NOT column MATRIX");
    // }
    //squre matrix
    if(r==c)
    {
        printf("squre MATRIX");
    }
    else
    {
        printf("NOT squre MATRIX");
    }
    return 0;
}