#include <stdio.h>
void fun(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &a[i]);
    }
    fun(a, n);
    return 0;
}