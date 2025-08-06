#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    //    int i;
    //    int length=strlen(b);
    //    for(i=0;i<=length;i++)  //manual
    //    {
    //     a[i]=b[i];
    //    }
    strcpy(a, b);//Built in function
    printf("%s %s", a, b);

    return 0;
}