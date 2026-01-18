#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, x, y;
        cin >> n >> m >> x >> y;
        long long a[n];
        long long b[m];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int j = 0; j < m; j++)
        {
            cin >> b[j];
        }
        if (n != m)
        {
            cout << n + m << "\n";
        }
        else
        {
            cout << n * 2 << "\n";
        }
    }
    return 0;
}