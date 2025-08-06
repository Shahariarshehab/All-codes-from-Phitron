#include <stdio.h>
int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    int star = n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= star; j++)
        {
            printf("*");
        }

        printf("\n");
        star--;
    }
    return 0;
}