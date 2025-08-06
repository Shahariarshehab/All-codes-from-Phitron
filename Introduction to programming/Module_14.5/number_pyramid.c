#include <stdio.h>
int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    int val = 1;
    int space = n - 1;
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= space; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= val; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
        val++;
        space--;
    }
    return 0;
}