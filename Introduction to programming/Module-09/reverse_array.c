#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int b, c, tmp;
    // for (b = 0, c = n - 1; b < c; b++, c--)
    // {
    //     tmp = a[b];
    //     a[b] = a[c];
    //     a[c] = tmp;
    // }
    b=0;
    c=n-1;
    while(b<c)
    {
        tmp = a[b];
        a[b] = a[c];
        a[c] = tmp;
        b++;
        c--;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}