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
    int n, k, q;
    cin >> n >> k >> q;
    const int mx = 200000 + 5;
    vi a(mx, 0);
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        a[l]++;
        if (r + 1 < mx)
        {
            a[r + 1]--;
        }
    }
    for (int i = 1; i < mx; i++)
    {
        a[i] += a[i - 1];
    }
    for (int i = 1; i < mx; i++)
    {
        if (a[i] >= k)
        {
            a[i] = 1;
        }
        else
        {
            a[i] = 0;
        }
    }
    for (int i = 1; i < mx; i++)
    {
        a[i] += a[i - 1];
    }
    while (q--)
    {
        int b, c;
        cin >> b >> c;
        cout << a[c] - a[b - 1] << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}