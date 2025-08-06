#include <stdio.h>
int main()
{
    int i,n;
    scanf("%d", &n);
    long long int  A[n], sum = 0;
    for (i = 1; i <= n; i++)
    {
        scanf("%lld", &A[i]);
    }
    for (i = 1; i <= n; i++)
    {
        sum = sum + A[i];
    }
    if (sum < 0)
    {
        sum = -sum;
    }

    printf("%lld", sum);

    return 0;
}