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
        vll a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll sum = 0;
        int cnt = 0;
        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            sum += abs(a[i]);
            if (a[i] < 0 && !flag)
            {
                flag = true;
                cnt++;
            }
            if (a[i] > 0)
            {
                flag = false;
            }
        }
        cout << sum << " " << cnt << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}