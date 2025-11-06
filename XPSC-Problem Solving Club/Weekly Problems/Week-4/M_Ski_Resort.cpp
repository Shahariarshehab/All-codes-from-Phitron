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
        ll n, k, q;
        cin >> n >> k >> q;

        vll a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll res = 0, l = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= q)
            {
                l++;
            }
            else
            {
                if (l >= k)
                {
                    res += (l - k + 1) * (l - k + 2) / 2;
                }
                l = 0;
            }
        }
        if (l >= k)
        {
            res += (l - k + 1) * (l - k + 2) / 2;
        }
        cout << res << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}