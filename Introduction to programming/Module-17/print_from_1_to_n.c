#include <stdio.h>
void hello(int i)
{
    if (i == 6)//end  condition
    {
        return; 
    }
   
    hello(i + 1); // increment/decrement
     printf("%d\n", i);
}
int main()
{

    hello(1); // initialization
    return 0;
}