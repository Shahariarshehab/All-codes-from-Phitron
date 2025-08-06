#include <stdio.h>
#include <string.h>

int main()
{
    char word[101];
    scanf("%s", word);
    int len = strlen(word);

    if (len == 1)
    {
        printf("Yes\n");
        return 0;
    }

    char temp = word[0];
    word[0] = word[len - 1];
    word[len - 1] = temp;

    char original[101];
    strcpy(original, word);
    temp = original[0];
    original[0] = original[len - 1];
    original[len - 1] = temp;

    if (strcmp(word, original) == 0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}