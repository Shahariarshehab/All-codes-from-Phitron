#include <bits/stdc++.h>
using namespace std;
int min_m(int n, int k)
{
    if (n == k)
    {
        return 0;
    }
    int m = n + 1 - k;
    if (m == n)
    {
        return 1;
    }
    int d = abs(k - n);
    int m_move = 1 + abs(m - n);
    return min(d, m_move);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << min_m(n, k) << "\n";
    }
    return 0;
}