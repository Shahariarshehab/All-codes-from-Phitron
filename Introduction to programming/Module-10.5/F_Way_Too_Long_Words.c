#include <stdio.h>
int main()
{
    int t, i, b;
    scanf("%d", &t);
    char s[100];
    for (i = 0; i < t; i++)
    {
        scanf("%s", s);
        int length = strlen(s);
        if (length <= 10)
        {
            printf("%s\n", s);
        }
        else
        {
            b = length - 2;
            printf("%c%d%c\n", s[0], b, s[length - 1]);
        }
    }

    return 0;
}