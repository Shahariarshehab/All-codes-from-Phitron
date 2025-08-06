#include <stdio.h>
void hello(int i, int n)
{
    if (i > n)
    {
        return;
    }
    printf("%d\n", i);

    hello(i + 1, n);
}
int main()
{
    int n;
    scanf("%d", &n);

    hello(1, n);
    return 0;
}