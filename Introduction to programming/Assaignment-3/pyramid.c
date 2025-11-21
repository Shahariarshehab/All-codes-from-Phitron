#include <stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;
    int space1=0;
    int star1=n*2-1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= space; k++)
        {
            printf("  ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("* ");
        }
        printf("\n");
        star += 2;
        space--;
    }
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= space1; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= star1; j++)
        {
            printf("*");
        }

        printf("\n");
        star1 -= 2;
        space1++;
    }
    return 0;
}