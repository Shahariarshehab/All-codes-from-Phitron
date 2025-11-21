// #include <stdio.h>
// void fun(int p, int y)
// {
//     int tmp = p;
//     p = y;
//     y = tmp;
// }
// int main()
// {
//     int x = 6, y = 5;
//     fun(x,y);
//     printf("%d%d\n", x, y);
//     return 0;
// }
#include <stdio.h>
int main()
{
   int a[4]={1,2,3,4};
   int *p;
   p=a+3;
   *p=5;
   printf("%d\n",a[3]);
    return 0;
}