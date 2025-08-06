#include <stdio.h>
int main()
{
    int n, m, i;
    scanf("%d %d", &n,&m);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int fre[100001] = {0};
    for (i = 0; i < n; i++)
    {
        int val= a[i];
        fre[val]++;
    }

    for (i = 1; i <= m; i++)
    {
        printf("%d\n", fre[i]);
    }
    return 0;
}