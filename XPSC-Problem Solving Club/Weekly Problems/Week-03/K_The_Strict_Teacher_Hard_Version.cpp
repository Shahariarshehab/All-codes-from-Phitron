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
        ll n;
        int m, q;
        cin >> n >> m >> q;

        vll a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        sort(all(a));
        while (q--)
        {
            ll b;
            cin >> b;
            if (b < a[0])
            {
                cout << a[0] - 1 << nl;
                continue;
            }
            if (b > a.back())
            {
                cout << n - a.back() << nl;
                continue;
            }
            auto it = lower_bound(all(a), b);

            ll l_t = *(it - 1), r_t = *it;
            ll gap = r_t - l_t;
            cout << gap / 2 << nl;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}