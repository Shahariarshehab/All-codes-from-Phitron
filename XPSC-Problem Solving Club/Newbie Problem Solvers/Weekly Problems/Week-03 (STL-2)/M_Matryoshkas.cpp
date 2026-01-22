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
        vi a(n);
        map<int, int> mp;
        set<int> s;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            s.insert(a[i]);
            s.insert(a[i] + 1);
        }
        int prev = 0;
        int r = 0;
        int ls = -1;
        for (auto size : s)
        {
            int curr = mp[size];

            if (ls != -1 && size != ls + 1)
            {
                prev = 0;
            }
            if (curr > prev)
            {
                r += curr - prev;
            }
            prev = curr;
            ls = size;
        }
        cout << r << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}