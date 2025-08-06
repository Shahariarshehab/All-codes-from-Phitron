#include <stdio.h>
#include <string.h>
int is_palindrome(char ar[], int size)
{
    int flag = 1;
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        if (ar[i] != ar[j])
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
int main()
{
    char s[1000];
    scanf("%s", s);
    int d = is_palindrome(s, strlen(s));
    if (d == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}