#include <stdio.h>
int main()
{
    char n, m = 0;
    scanf(" %c", &n);
    m = n + 1;
    if (m > 'z')
    {
        printf("a\n");
    }
    else
    {
        printf("%c\n", m);
    }

    return 0;
}