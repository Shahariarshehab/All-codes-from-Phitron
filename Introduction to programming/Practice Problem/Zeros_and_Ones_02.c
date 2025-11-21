#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], i, b;
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &b);
    if (a[b]==0)
    {
        a[b]=1;
    }

    for (i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}