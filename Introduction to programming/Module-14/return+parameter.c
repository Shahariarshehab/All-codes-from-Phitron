#include <stdio.h>
int sum(int c, int d)
{
    int ans = c + d;
    return ans;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int c=sum(a, b);
    printf("%d", c);
    return 0;
}