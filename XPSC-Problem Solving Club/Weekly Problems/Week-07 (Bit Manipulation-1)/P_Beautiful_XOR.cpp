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
        int a, b;
        cin >> a >> b;
        if (__builtin_clz(a) > __builtin_clz(b))
        {
            cout << -1 << nl;
        }
        else if (a == b)
        {
            cout << 0 << nl;
        }
        else
        {
            vi val;
            for (int i = 0; i < 31; i++)
            {
                int x = (1 << i);
                if (x <= a && (a & x) == 0)
                {
                    a += x;
                    val.push_back(x);
                }
            }
            for (int i = 0; i < 31; i++)
            {
                int x = (1 << i);
                if (x <= a && (b & x) == 0)
                {
                    val.push_back(x);
                }
            }
            cout << val.size() << nl;
            for (auto z : val)
            {
                cout << z << " ";
            }
            cout << nl;
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