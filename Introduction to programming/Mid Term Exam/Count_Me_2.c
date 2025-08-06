#include <stdio.h>
int main()
{
    char s[100001];
    scanf("%s", s);
    int i, count = 0;
    for (i = 0; s[i]!='\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            continue;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}