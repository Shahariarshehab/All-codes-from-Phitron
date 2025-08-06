#include <stdio.h>
int main()
{
    
    char s[100001];
    int i,count[26] = {0};
    scanf("%s", s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            count[s[i] - 'a']++;
        }
    }
    for (i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c - %d\n", 'a' + i, count[i]);
        }
    }

    return 0;
}