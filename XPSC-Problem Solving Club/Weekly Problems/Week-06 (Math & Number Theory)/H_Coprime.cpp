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
        int n;
        cin >> n;
        vi a(n);
        vi b(1005, -1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[a[i]] = i + 1;
        }
        int ans = -1;
        for (int i = 1; i <= 1000; i++)
        {
            if (b[i] == -1)
            {
                continue;
            }
            for (int j = 1; j <= 1000; j++)
            {
                if (b[j] == -1)
                {
                    continue;
                }
                if (__gcd(i, j) == 1)
                {
                    ans = max(ans, b[i] + b[j]);
                }
            }
        }
        cout << ans << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}