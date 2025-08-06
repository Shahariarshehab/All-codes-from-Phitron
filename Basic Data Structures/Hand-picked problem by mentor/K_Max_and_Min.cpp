#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int d = min({a, b, c});
    int f = max({a, b, c});
    cout << d << " " << f << endl;
    return 0;
}