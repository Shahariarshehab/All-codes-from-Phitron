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

    int n;
    cin >> n;
    int tmp = n;
    vi a;
    while (n > 0)
    {
        a.push_back(n % 10);
        n /= 10;
    }

    if (tmp & 1)
    {
        cout << 0 << nl;
        return;
    }

    for (auto val : a)
    {
        if (val & 1)
        {
            cout << 1 << nl;
            return;
        }
    }

    int last = a[0];
    sort(rall(a));

    int cnt = 0;
    int sum = 0;

    for (int val : a)
    {
        if (sum <= last)
        {
            sum += val, cnt++;
        }
        if (sum > last)
        {
            cout << cnt + 1 << nl;
            return;
        }
    }

    cout << -1 << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        Shaharia_ar_solve();
    }
    return 0;
}