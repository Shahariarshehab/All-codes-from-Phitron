#include <stdio.h>
void fun(int *p, int *y)
{
    int tmp = *p;
    *p = *y;
    *y = tmp;
    // *p=20;
    // printf("fun function ar x er adress;%p\n",&p);
}
int main()
{
    int x = 10, y = 20;
    fun(&x, &y);
    printf("%d%d", x, y);
    // printf("main function ar x er adress;%p\n",&x);
    return 0;
}