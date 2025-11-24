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
        int n, q;
        cin >> n >> q;
        vll a(n + 1), prefix(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            prefix[i] = prefix[i - 1] + a[i];
        }
        ll total = prefix[n];
        while (q--)
        {
            int l, r;
            ll k;
            cin >> l >> r >> k;
            ll sum = prefix[r] - prefix[l - 1];
            ll b = r - l + 1;
            ll sum1 = total - sum + b * k;
            if (sum1 % 2 == 1)
            {
                HA;
            }
            else
            {
                NA;
            }
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