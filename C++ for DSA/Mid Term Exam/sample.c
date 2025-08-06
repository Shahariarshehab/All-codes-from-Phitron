#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count = 0;
    int maxcount = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            count++;
            if (count > maxcount)
            {
                maxcount = count;
            }
        }
        else
        {
            count = 0;
        }
    }
    int first = 0;
    int last = 0;
    
    for (int i = 0; i < n && a[i] == 1; i++)
    {
        first++;
    }
    for (int i = n - 1; i >= 0 && a[i] == 1; i--)
    {
        last++;
    }
    int count1= first+last;
    if (count1 > maxcount)
    {
        maxcount = count1;
    }

    printf("%d", maxcount);

    return 0;
}