#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int m = min({a, b, c});
    int n = max({a, b, c});
    cout << m << " " << n << endl;
    return 0;
}