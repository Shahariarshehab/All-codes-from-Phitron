#include <stdio.h>
int main()
{
    int n, i,a;
    int Even = 0, Odd = 0, Pos = 0, Neg = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if(a%2==0)
        {
            Even++;
        }
        else
        {
            Odd++;
        }
        if(a>0)
        {
            Pos++;
        }
        else if(a<0)
        {
            Neg++;
        }
    }
    printf("Even: %d\n",Even);
    printf("Odd: %d\n",Odd);
    printf("Positive: %d\n",Pos);
    printf("Negative: %d\n",Neg);

    return 0;
}