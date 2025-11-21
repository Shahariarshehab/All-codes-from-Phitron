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
    if (r == c) // squre matrix
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    // we are now at diagonal
                }
                else
                {//we are now at outside diagonal
                    if (a[i][j] != 0)
                    {
                        flag = 1;
                        printf("This is not a primary diagonal matrix");
                    }
                }
            }
        }
        if (flag == 0)
        {
            printf("This is a primary diagonal matrix");
        }
    }
    else
    {
        printf("This is not a diagonal metrix");
    }

    return 0;
}