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
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    set<int> s;
    int l = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        while (s.count(a[i]))
        {
            s.erase(a[l]);
            l++;
        }
        s.insert(a[i]);
        res = max(res, i - l + 1);
    }
    cout << res << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}