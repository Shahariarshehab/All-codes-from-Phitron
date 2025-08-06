#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 1], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int indx, val;
    scanf("%d%d", &indx, &val);
    for (i = n; i >= indx + 1; i--)
    {
        a[i] = a[i - 1];
    }
    a[indx]=val;
    for (i = 0; i <=n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}