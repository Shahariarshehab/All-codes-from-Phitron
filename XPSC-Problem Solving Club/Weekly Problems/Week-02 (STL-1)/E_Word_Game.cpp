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
    int t;
    cin >> t;
    while (t--)
    {
        int n, m = 3;
        cin >> n;
        map<string, vi> mp;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }
        vi ans(m + 1);
        for (auto [x, y] : mp)
        {
            vi v = y;
            if (v.size() == 1)
            {
                ans[v[0]] += 3;
            }
            if (v.size() == 2)
            {
                ans[v[0]]++;
                ans[v[1]]++;
            }
        }
        for (int i = 1; i <= m; i++)
        {
            cout << ans[i] << " ";
        }
        cout << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}