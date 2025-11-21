#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], i, num0 = 0, num1 = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            num0++;
        }
        else if (a[i] == 1)
        {
            num1++;
        }
    }
    printf("%d %d", num0, num1);
    return 0;
}