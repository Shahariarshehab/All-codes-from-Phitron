#include <stdio.h>
void hello(int n)
{
    if (n < 1)
    {
        return;
    }
    printf("%d", n);
    if(n>1)
    {
        printf(" ");
    }
    hello(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);

    hello(n);
    return 0;
}