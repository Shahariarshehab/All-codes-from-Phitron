#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    char s[n+1];
    int sum = 0;
    scanf("%s",s);
    for (i = 0; i < n; i++)
    {
        sum += s[i];
    }
    if (sum % 3 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}