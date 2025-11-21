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
    int specefic_row;
    scanf("%d",&specefic_row);
    for (int i = 0; i < c; i++)
    {
        printf("%d ", a[specefic_row][i]);
    }

     int specefic_column;
    scanf("%d",&specefic_column);
    for (int i = 0; i < r; i++)
    {
        printf("\n%d ", a[i][specefic_column]);
    }
    return 0;
}