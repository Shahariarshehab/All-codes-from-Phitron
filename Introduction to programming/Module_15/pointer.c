#include <stdio.h>
int main()
{
    int x = 100;
    printf("%d\n", x);
    printf("%p\n", &x);//refference

    int* ptr;
    ptr=&x;
    printf("%p\n",ptr);
    printf("%p\n",&ptr);
    printf("%d\n",*ptr);//derefference
    
    return 0;
}