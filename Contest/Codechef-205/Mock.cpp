#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int c;
    cin >> c;
    int flag = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == c)
        {
            d = i;
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << d << "\n";
    }
    return 0;
}
