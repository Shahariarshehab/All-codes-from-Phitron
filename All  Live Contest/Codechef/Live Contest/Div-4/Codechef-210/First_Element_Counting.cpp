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
        vector<pair<ll, int>> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i].first;
            v[i].second = i;
        }
        sort(all(v));

        vll ans(n);

        for (int j = 0; j < n; ++j)
        {
            if (j == 0 || j == n - 1)
            {
                ans[v[j].second] = -1;
                continue;
            }
            ll l_mid = (v[j - 1].first + v[j].first) / 2;
            ll r_mid = (v[j].first + v[j + 1].first) / 2;
            ll L = l_mid + 1;
            ll R = r_mid;
            ll count = R - L + 1;
            if (count < 0)
            {
                count = 0;
            }
            ans[v[j].second] = count;
        }
        for (int i = 0; i < n; ++i)
        {
            if (i)
            {
                cout << ' ';
            }
            cout << ans[i];
        }
        cout << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}