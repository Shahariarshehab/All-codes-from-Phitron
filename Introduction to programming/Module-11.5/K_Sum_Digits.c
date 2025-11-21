#include <stdio.h>
int main()
{
   int n,i,sum = 0;
   scanf("%d",&n);
   char s[n];
   scanf("%s",s);
   for(i=0;i<s[n];i++)
   {
    sum+=s[i];
   }
   printf("%d",sum);
    return 0;
}