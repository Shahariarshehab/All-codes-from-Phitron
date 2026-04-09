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
    vector<pii> a;
    for (int i = 0; i < n; i++)
    {
        int in, out;
        cin >> in >> out;
        a.push_back({in, +1});
        a.push_back({out, -1});
    }
    sort(all(a));
    int curr = 0, ans = 0;
    for (auto x : a)
    {
        curr += x.second;
        ans = max(ans, curr);
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