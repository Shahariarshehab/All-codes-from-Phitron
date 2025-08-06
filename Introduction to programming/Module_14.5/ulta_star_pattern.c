#include <stdio.h>
int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    int star = n;
    int space = 0;
    for (i = 1; i <= n; i++)
    {
        for (k = 0; k < space; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star--;
        space++;
    }
    return 0;
}