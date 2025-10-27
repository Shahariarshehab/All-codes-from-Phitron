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

        vi a;
        for (int i = 1; i <= n; i++)
        {
            a.push_back(i);
        }
        vector<pii> v;
        int last = a[n - 1];

        for (int i = n - 2; i >= 0; i--)
        {
            v.push_back({last, a[i]});
            last = (last + a[i] + 1) / 2;
        }
        cout << last << nl;
        for (auto &p : v)
        {
            cout << p.first << " " << p.second << nl;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}