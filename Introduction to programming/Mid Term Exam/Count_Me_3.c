#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    char s[100001];
    int count_A, count_a, count_1;

    for (i = 0; i < n; i++)
    {
        count_A = 0;
        count_a = 0;
        count_1 = 0;

        scanf("%s", s);

        for (j = 0; s[j] != '\0'; j++)
        {
            if (s[j] >= 'a' && s[j] <= 'z')
            {
                count_a++;
            }
            else if (s[j] >= 'A' && s[j] <= 'Z')
            {
                count_A++;
            }
            else if (s[j] >= '0' && s[j] <= '9')
            {
                count_1++;
            }
        }

        printf("%d %d %d\n", count_A, count_a, count_1);
    }

    return 0;
}