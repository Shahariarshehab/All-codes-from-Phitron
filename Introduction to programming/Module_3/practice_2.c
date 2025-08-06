#include <stdio.h>
int main()
{
    int N, i;
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d YES\n", i);
        }
        else
        {
            printf("%d NO\n", i);
        }
    }
    return 0;
}