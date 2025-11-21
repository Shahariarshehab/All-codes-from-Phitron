#include <stdio.h>
#include<limits.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int max = INT_MIN;
    for (i = 1; i <= n; i++)
    {
        int val;
        scanf("%d", &val);
        if (val > max)
        {
            max = val;
        }
    }
    printf("%d\n", max);
    return 0;
}