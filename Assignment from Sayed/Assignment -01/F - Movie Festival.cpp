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
        a.push_back({out, in});
    }
    sort(all(a));
    int cnt = 0, ans = 0;
    for (auto [x, y] : a)
    {
        if (y >= ans)
        {
            cnt++;
            ans = x;
        }
    }
    cout << cnt << nl;
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