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
    int n, k;
    cin >> n >> k;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;
    vi b;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            b.push_back(a[i]);
        }
    }
    if (b.size() < k)
    {
        cout << -1 << nl;
        return;
    }
    sort(all(b));
    int cost = 0;
    for (int i = 0; i < k; i++)
    {
        cost += b[i];
    }
    cout << cost << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        Shaharia_ar_solve();
    }
    return 0;
}