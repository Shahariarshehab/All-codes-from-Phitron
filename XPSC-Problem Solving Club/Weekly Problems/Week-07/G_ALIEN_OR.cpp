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
        int n, k;
        cin >> n >> k;
        map<string, bool> ache;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            ache[s] = true;
        }
        string s;
        for (int i = 0; i < k; i++)
        {
            s.push_back('0');
        }
        bool ok = true;
        for (int i = 0; i < k; i++)
        {
            s[i] = '1';
            if (!ache[s])
            {
                ok = false;
            }
            s[i] = '0';
        }
        if (ok)
        {
            HA;
        }
        else
        {
            NA;
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