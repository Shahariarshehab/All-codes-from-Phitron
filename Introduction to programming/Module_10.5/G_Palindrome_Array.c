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
    int b = 1;
    for (i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            b = 0;
            break;
        }
      
    }
    if (b == 0)
    {
        printf("NO\n");
    }
    else 
    {
        printf("YES\n");
    }
    return 0;
}