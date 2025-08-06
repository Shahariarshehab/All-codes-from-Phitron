#include <stdio.h>
int main()
{
    int T, M1, M2, D;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d%d%d ", &M1, &M2, &D);
        int remdays;
        remdays = D - ((M1 * D) / (M1 + M2));
        printf("%d\n", remdays);
    }

    return 0;
}