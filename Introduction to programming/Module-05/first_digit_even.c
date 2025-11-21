#include <stdio.h>
int main()
{
    int A, N;
    scanf("%d", &A);
    N = A / 1000;
    if (N % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}