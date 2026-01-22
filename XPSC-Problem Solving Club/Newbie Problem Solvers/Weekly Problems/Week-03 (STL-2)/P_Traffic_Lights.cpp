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
    int n, t;
    cin >> n >> t;
    vi pos(t);
    for (int i = 0; i < t; i++)
    {
        cin >> pos[i];
    }
    set<int> l;
    multiset<int> g;

    l.insert(0);
    l.insert(n);
    g.insert(n);

    for (int p : pos)
    {
        auto it = l.upper_bound(p);
        int rs = *it;
        int ls = *prev(it);

        g.erase(g.find(rs - ls));
        g.insert(p - ls);
        g.insert(rs - p);

        l.insert(p);

        cout << *g.rbegin() << " ";
    }
    cout << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}