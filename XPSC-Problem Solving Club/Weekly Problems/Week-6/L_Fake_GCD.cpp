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
        int n;
        cin >> n;
        vi odd_p, odd_v, even_p, even_v;
        vi ans(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                odd_p.push_back(i);
                odd_v.push_back(i);
            }
            else
            {
                even_p.push_back(i);
                even_v.push_back(i);
            }
        }
        int m = odd_p.size();
        for (int j = 0; j < m; j++)
        {
            int pos = odd_p[j];
            int val = odd_v[(j + 1) % m];
            ans[pos] = val;
        }
        int p = even_p.size();
        for (int j = 0; j < p; j++)
        {
            int pos = even_p[j];
            int val = even_v[(j + 1) % p];
            ans[pos] = val;
        }
        for (int i = 1; i <= n; i++)
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