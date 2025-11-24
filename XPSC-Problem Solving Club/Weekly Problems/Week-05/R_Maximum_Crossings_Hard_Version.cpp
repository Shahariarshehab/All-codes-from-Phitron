// بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
// "Verily, with hardship comes ease." – [Qur'an 94:6]
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
ll msort_cnt(vi &a, vi &t, int l, int m, int r)
{
    int i = l, j = m+1, k = l;
    ll inv = 0;
    while (i <= m && j <= r)
    {
        if (a[i] <= a[j])
        {
            t[k++] = a[i++];
        }
        else
        {
            t[k++] = a[j++];
            inv += (ll)(m - i+1);
        }
    }
    while (i <= m)
    {
        t[k++] = a[i++];
    }
    while (j <= r)
    {
        t[k++] = a[j++];
    }
    for (int x = l; x <= r; x++)
    {
        a[x] = t[x];
    }
    return inv;
}
ll sort_cnt(vi &a, vi &t, int l, int r)
{
    if (l >= r)
    {
        return 0;
    }
    int m = l + (r - l) / 2;
    ll ans = sort_cnt(a, t, l, m);
    ans += sort_cnt(a, t, m + 1, r);
    ans += msort_cnt(a, t, l, m , r);
    return ans;
}
ll inv_cnt(vi a)
{
    int n = a.size();
    vi tmp(n);
    return sort_cnt(a, tmp, 0, n - 1);
}
void Shaharia_ar_solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll b = inv_cnt(a);
        sort(a.begin(), a.end());
        ll pairs = 0;
        ll cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                cnt++;
            }
            else
            {
                pairs += cnt * (cnt - 1) / 2;
                cnt = 1;
            }
        }
        pairs += cnt * (cnt - 1) / 2;
        cout << (b + pairs) << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}