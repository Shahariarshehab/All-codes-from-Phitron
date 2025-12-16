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
        int n, s;
        cin >> n >> s;
        vll a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int total = 0;
        for (int x : a)
        {
            total += x;
        }
        if (total < s)
        {
            cout << -1 << nl;
            continue;
        }
        if (total == s)
        {
            cout << 0 << nl;
            continue;
        }
        int l = 0, sum = 0, mx = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            while (sum > s)
            {
                sum -= a[l];
                l++;
            }
            if (sum == s)
            {
                int ans = i - l + 1;
                if (ans > mx)
                {
                    mx = ans;
                }
            }
        }
        cout << n - mx << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}