#include <stdio.h>
int count_before_one(int a[],int n)
{
    int count=0;
    int j;
    for(j=0;j<n;j++)
    {
        if(a[j]!=1)
        {
            count++;
        }
        else
        {
          break;
        }
    }
    return count ;
}
int main()
{
   int n,i;
   scanf("%d",&n);
   int a[n];
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
int num=count_before_one(a,n);
printf("%d",num);
    return 0;
}