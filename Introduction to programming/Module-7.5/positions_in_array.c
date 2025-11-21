#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int A[1000], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < n; i++)

    {
        if (A[i] <= 10)
        {
            printf("A[%d] = %d\n", i, A[i]);
        }
    }

    return 0;
}
