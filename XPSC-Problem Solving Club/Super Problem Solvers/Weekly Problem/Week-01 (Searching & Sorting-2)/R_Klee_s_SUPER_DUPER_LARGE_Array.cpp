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
    ll total = n * (2 * k + n - 1) / 2;
    auto calc = [&](ll i)
    {
        ll pref = i * (2 * k + i - 1) / 2;
        return llabs(2 * pref - total);
    };
    long double d = (long double)(2 * k - 1) * (2 * k - 1) + 4.0L * total;
    ll root = (ll)((-(2 * k - 1) + sqrt(d)) / 2);

    ll ans = LLONG_MAX;
    for (ll i = max(1LL, root - 3); i <= min(n - 1, root + 2); i++)
    {
        ans = min(ans, calc(i));
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