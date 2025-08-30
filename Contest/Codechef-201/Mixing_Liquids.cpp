#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int f=min(a , b / 2);
        cout << 3 * f << "\n";
    }

    return 0;
}