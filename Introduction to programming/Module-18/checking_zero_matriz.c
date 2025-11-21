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
    
    int flag = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == 0)
            {
                flag = 0;
            }
            else
            {
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("ZERO matrix");
    }
    else
    {
        printf("not zero matrix");
    }
    return 0;
}