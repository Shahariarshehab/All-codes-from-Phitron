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
    int n, m;
    cin >> n >> m;
    vi a(n + 2);
    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;
        a[l] += 1;
        a[r + 1] -= 1;
    }
    int mn = INT_MAX;
    int b = 0;
    for (int i = 1; i <= n; i++)
    {
        b += a[i];
        mn = min(mn, b);
    }
    cout << mn << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}