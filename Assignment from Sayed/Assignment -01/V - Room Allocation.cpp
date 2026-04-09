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
    vector<vll> v(n);
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        v[i] = {a, b, i};
    }
    sort(all(v));
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    vi ans(n);
    int cnt = 0;
    for (auto &c : v)
    {
        ll a = c[0], b = c[1];
        int idx = c[2];

        if (!pq.empty() && pq.top().first < a)
        {
            auto x = pq.top();
            pq.pop();
            ans[idx] = x.second;
            pq.push({b, x.second});
        }
        else
        {
            cnt++;
            ans[idx] = cnt;
            pq.push({b, cnt});
        }
    }
    cout << cnt << nl;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << nl;
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