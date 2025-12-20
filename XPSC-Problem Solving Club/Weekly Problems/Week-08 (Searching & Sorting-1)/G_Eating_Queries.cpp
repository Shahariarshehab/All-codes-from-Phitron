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
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vi a(n), prefix(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(rall(a));
        for (int i = 1; i <= n; i++)
        {
            prefix[i] = prefix[i - 1] + a[i - 1];
        }
        for (int i = 0; i < q; i++)
        {
            int k, ans = -1;
            cin >> k;
            auto it = lower_bound(all(prefix), k);
            if (it != prefix.end())
            {
                ans = it - prefix.begin();
            }
            cout << ans << nl;
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