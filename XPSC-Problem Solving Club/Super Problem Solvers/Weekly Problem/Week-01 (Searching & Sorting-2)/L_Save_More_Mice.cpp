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
    ll n, k;
    cin >> n >> k;
    vll a(k);
    for (int i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        a[i] = n - x;
    }
    sort(all(a));
    ll t = 0, ans = 0;
    for (int i = 0; i < k; i++)
    {
        t += a[i];
        if (t < n)
        {
            ans++;
        }
        else
        {
            break;
        }
    }
    cout << ans << nl;
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