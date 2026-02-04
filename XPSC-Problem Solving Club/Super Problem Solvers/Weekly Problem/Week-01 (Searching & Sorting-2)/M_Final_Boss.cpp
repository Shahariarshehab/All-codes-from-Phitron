// بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Md.Shaharia Islam
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
bool good(ll m, ll n, ll h, vll &a, vll &c)
{
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt = min(cnt + (1 + (m - 1) / c[i]) * a[i], h);
    }
    return cnt >= h;
}
void Shaharia_ar_solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, h;
        cin >> h >> n;
        vll a(n), c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        ll l = 0, r = 1e12;
        while (l + 1 < r)
        {
            ll mid = l + (r - l) / 2;
            if (good(mid, n, h, a, c))
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
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}