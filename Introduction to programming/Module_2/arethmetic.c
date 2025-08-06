#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int sum = a + b;
    printf("sumation=%d\n", sum);
    int sub = a - b;
    printf("subtraction=%d\n", sub);
    int mul = a * b;
    printf("multiplication=%d\n", mul);
    float divition = a / b;
    printf("divition=%f\n", divition);
    return 0;
}