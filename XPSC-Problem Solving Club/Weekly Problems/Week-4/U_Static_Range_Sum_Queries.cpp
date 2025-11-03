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
    ll n, q;
    cin >> n >> q;
    vll a(n + 1);
    vll prefix(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        prefix[i] = prefix[i - 1] + a[i];
    }
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}