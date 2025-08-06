#include <stdio.h>
int main()
{
    int T, i;
    scanf("%d", &T);
    for (i = 1; i <= T; i++)
    {
        int n;
        scanf("%d", &n);
        do
        {
            printf("%d ", n % 10);
            n = n / 10;
        }while (n != 0);
        printf("\n");
    }
    return 0;
}