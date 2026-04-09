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
    int n, m;
    ll k;
    cin >> n >> m >> k;
    vll a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(all(a));
    sort(all(b));
    int i = 0, j = 0, cnt = 0;
    while (i < n && j < m)
    {
        if (abs(a[i] - b[j]) <= k)
        {
            cnt++;
            i++;
            j++;
        }
        else if (b[j] < a[i] - k)
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    cout << cnt << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        Shaharia_ar_solve();
    }
    return 0;
}