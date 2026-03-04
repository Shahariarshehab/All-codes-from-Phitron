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
    string s;
    cin >> s;
    ll nb, ns, nc, pb, ps, pc, ru;
    cin >> nb >> ns >> nc >> pb >> ps >> pc >> ru;

    ll needb = 0, needs = 0, needc = 0;
    for (char ch : s)
    {
        if (ch == 'B')
            needb++;
        else if (ch == 'S')
            needs++;
        else if (ch == 'C')
            needc++;
    }
    auto ok = [&](ll mid)
    {
        ll cost = 0;
        cost += max(0LL, mid * needb - nb) * pb;
        cost += max(0LL, mid * needs - ns) * ps;
        cost += max(0LL, mid * needc - nc) * pc;
        return cost <= ru;
    };
    ll l = 0, r = 1e13, mid = 0, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        Shaharia_ar_solve();
    }
    return 0;
}