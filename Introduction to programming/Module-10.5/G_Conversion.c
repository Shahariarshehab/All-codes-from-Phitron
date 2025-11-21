#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    scanf("%s", s);
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ',')
        {
            printf(" ");
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            printf("%c", s[i] + 32);
        }
       
    }

    return 0;
}