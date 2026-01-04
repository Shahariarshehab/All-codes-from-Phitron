// بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Md.Shaharia Islam
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void Shaharia_ar_solve()
{
    int n, m;
    cin >> n >> m;
    vi a(n + 1), pos(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pos[a[i]] = i;
    }
    int r = 1;
    for (int i = 1; i < n; i++)
    {
        if (pos[i] > pos[i + 1])
        {
            r++;
        }
    }
    while (m--)
    {
        int b, c;
        cin >> b >> c;
        int x = a[b], y = a[c];
        set<int> s = {x, x - 1, y, y - 1};
        for (int v : s)
        {
            if (v >= 1 && v < n && pos[v] > pos[v + 1])
            {
                r--;
            }
        }
        swap(a[b], a[c]);
        pos[x] = c;
        pos[y] = b;
        for (int v : s)
        {
            if (v >= 1 && v < n && pos[v] > pos[v + 1])
            {
                r++;
            }
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