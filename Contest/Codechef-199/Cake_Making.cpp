#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a == 1 && b == 1)
    {

        cout << 0 << "\n";
    }
    else if (a == b)
    {
        int d = (a * b) - a;
        cout << d << "\n";
    }
    else
    {
        int e = (a * b) - min(a, b);
        cout << e << "\n";
    }
    return 0;
}