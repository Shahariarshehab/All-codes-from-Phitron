#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a >= 1000)
    {
        printf("Three Kacchi\n");
    }
    else if (a < 1000 && a >= 500)
    {
        printf("One Large Pizza\n");
    }
    else if (a < 500 && a >= 250)
    {
        printf("Three Small Burger\n");
    }
    else if (a < 250 && a >= 100)
    {
        printf("Three Fuchka\n");
    }
    else
    {
        printf("Nothing\n");
    }

    return 0;
}