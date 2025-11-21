#include <stdio.h>
int main()
{int a,i,n;
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    {
        a=n*i;
    printf("%d * %d = %d\n",n,i,a);
    }
   
    return 0;
}