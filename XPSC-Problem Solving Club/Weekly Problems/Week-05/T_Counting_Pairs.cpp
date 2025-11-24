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
ll calc(const vll &a, ll x)
{
    int n = a.size();
    ll s = accumulate(a.begin(), a.end(), 0LL);
    int j = 0;
    ll ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        while (j < n && s - a[i] - a[j] >= x)
        {
            j++;
        }
        ans += n - j;
    }
    for (int i = 0; i < n; i++)
    {
        if (s - a[i] - a[i] < x)
        {
            ans--;
        }
    }
    return ans / 2;
}
void Shaharia_ar_solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll x, y;
        cin >> n >> x >> y;
        vll a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll ans = calc(a, y + 1) - calc(a, x);
        cout << ans << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}