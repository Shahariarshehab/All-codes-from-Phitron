#include <stdio.h>
int main()
{int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int indx1,indx2,tmp;
    scanf("%d%d",&indx1,&indx2);
    indx1 =tmp;
    indx1=indx2;
    indx2=tmp;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
   
    return 0;
}