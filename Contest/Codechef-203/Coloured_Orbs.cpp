#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, b;
    cin >> r >> b;
    if (r < b)
    {
        cout << (r * 5) + (b - r) * 2 << "\n";
    }
    else
    {
        cout << (b * 5) + (r - b) << "\n";
    }

    return 0;
}