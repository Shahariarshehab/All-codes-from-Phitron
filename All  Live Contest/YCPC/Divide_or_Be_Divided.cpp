#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    string v;
    cin >> v;
    if (x > n || y > n || x < 1 || y < 1)
    {
        cout << "NO" << endl;
        return 0;
    }
    int a = v[x - 1] - '0';
    int b = v[y - 1] - '0';
    
    if ((a != 0 && b % a == 0) || (b != 0 && a % b == 0))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}