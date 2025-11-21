#include <stdio.h>
int main()
{
    int n, sum = 0, sum1 = 0;
    scanf("%d", &n);
    int a[n], i;
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= n; i++)
    {
        if (a[i] > 0)
        {
            sum = sum + a[i];
        }
        else if (a[i] < 0)
        {
            sum1 = sum1 + a[i];
        }
    }
    printf("%d %d", sum, sum1);
    return 0;
}
