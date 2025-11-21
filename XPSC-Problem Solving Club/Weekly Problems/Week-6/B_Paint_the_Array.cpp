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

void Shaharia_ar_solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vll a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll g1 = 0, g2 = 0;
        for (int i = 0; i < n; i += 2)
        {
            g1 = __gcd(g1, a[i]);
        }
        for (int i = 1; i < n; i += 2)
        {
            g2 = __gcd(g2, a[i]);
        }
        ll ans = 0;
        bool ok = true;
        for (int i = 1; i < n; i += 2)
        {
            if (a[i] % g1 == 0)
            {
                ok = false;
            }
        }
        if (ok)
        {
            ans = g1;
        }
        else
        {
            ok = true;
            for (int i = 0; i < n; i += 2)
            {
                if (a[i] % g2 == 0)
                {
                    ok = false;
                }
            }
            if (ok)
            {
                ans = g2;
            }
        }
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