#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, i, j, k;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    e = a + b - c;
    f = a - b + c;
    g = a * b - c;
    h = a - b * c;
    i = a + b * c;
    j = a * b + c;
    if (e == d)
    {
        printf("YES\n");
    }
    else if (f == d)
    {
        printf("YES\n");
    }
    else if (g == d)
    {
        printf("YES\n");
    }
    else if (h == d)
    {
        printf("YES\n");
    }
    else if (i == d)
    {
        printf("YES\n");
    }
    else if (j == d)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}