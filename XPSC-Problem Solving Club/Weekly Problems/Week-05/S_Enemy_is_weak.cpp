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
    int n;
    cin >> n;
    vll a(n), b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b.push_back(a[i]);
    }
    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());
    vi c(n);
    for (int i = 0; i < n; i++)
    {
        c[i] = lower_bound(b.begin(), b.end(), a[i]) - b.begin() + 1;
    }
    int d = b.size();
    vi l(d + 1, 0), r(d + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int x = c[i];
        while (x <= d)
        {
            r[x]++;
            x += x & -x;
        }
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x = c[i];
        while (x <= d)
        {
            r[x]--;
            x += x & -x;
        }
        int left = 0;
        x = c[i];
        while (x > 0)
        {
            left += l[x];
            x -= x & -x;
        }
        ll left_g = i - left;

        int right = 0;
        x = c[i] - 1;
        while (x > 0)
        {
            right += r[x];
            x -= x & -x;
        }
        ans += left_g * right;
        x = c[i];
        while (x <= d)
        {
            l[x]++;
            x += x & -x;
        }
    }
    cout << ans << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}