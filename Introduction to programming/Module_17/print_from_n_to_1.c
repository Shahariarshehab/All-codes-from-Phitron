#include <stdio.h>
void hello(int i)
{
    if (i == 0)//end condition
    {
        return;
    }
    printf("%d\n", i);
    hello(i - 1); // increment/decrement
}
int main()
{
   
    hello(5); // initialization
    return 0;
}