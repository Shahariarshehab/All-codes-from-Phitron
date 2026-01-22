#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, b;
    cin >> r >> b;
    cout << r + 2 * b + 2 * min(r,b) << "\n";

    return 0;
}