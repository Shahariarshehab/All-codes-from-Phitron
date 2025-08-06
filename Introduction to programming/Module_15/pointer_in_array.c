#include <stdio.h>
int main()
{
   int a[5]={10,20,30,40,50};
   printf("%p\n",&a[0]);
   printf("%d\n",*a);//derefference
   *a=100;//derefference
   for(int i=0;i<5;i++)
   {
    printf("%d\n",a[i]);
   }
    return 0;
}