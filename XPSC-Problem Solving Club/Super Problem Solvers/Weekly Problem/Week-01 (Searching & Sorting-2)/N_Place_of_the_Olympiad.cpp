// Author: Md.Shaharia Islam
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define ff first
#define ss second
#define nl '\n'
#define HA cout << "YES" << nl
#define NA cout << "NO" << nl

void Shaharia_ar_solve()
{
    ll n, m, k, l, r, mid;
    cin >> n >> m >> k;
    l = 0, r = m;
    while (l + 1 < r)
    {
        mid = l + (r - l) / 2;
        if ((m / (mid + 1) * mid + m % (mid + 1)) * n >= k)
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    cout << r << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        Shaharia_ar_solve();
    }
    return 0;
}