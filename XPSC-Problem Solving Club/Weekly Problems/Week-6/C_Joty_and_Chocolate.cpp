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
ll LMC(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}
void Shaharia_ar_solve()
{
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll x = (n / a) * p;
    ll y = (n / b) * q;
    ll overlap = (n / LMC(a, b));
    ll ans = ((x + y) - (overlap * (p + q))) + (overlap * max(p, q));
    cout << ans << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}