#include <stdio.h>
#include<string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    // int i;
    // int  length_a=strlen(a);
    // int length_b=strlen(b);//manual
    // for(i=0;i<=length_b;i++)
    // {
    //     a[i+length_a]=b[i];
    // }
    strcat(a,b);//built in function
    printf("%s %s", a, b);
    return 0;
}