#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int e, m;
        cin >> e >> m;

        int a = (e * m) % 60;
        int b = (e * m) / 60;
        cout << b << " " << a << "\n";
    }
    return 0;
}