#include <stdio.h>
int main()
{
    int n, i, b, flag = 0;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &b);
    for (i = 0; i < n; i++)
    {
        if (a[i] == b)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%d\n", i);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}