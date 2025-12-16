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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vi a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        string s1;
        cin >> s1;

        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());

        sort(s1.begin(), s1.end());

        for (int i = 0; i < a.size(); i++)
        {
            s[a[i] - 1] = s1[i];
        }
        cout << s << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}