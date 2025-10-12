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
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = n - 1;
    int s = 0, d = 0;
    bool ok = false;
    while (l <= r)
    {
        if (a[l] >= a[r])
        {
            if (!ok)
            {
                s += a[l];
                l++;
               
            }
            else
            {
                d += a[l];
                l++;
              
            }
        }
        else
        {

            if (!ok)
            {
                s += a[r];
                r--;
            }
            else
            {
                d += a[r];
                r--;
            }
        }
        ok=!ok;
    }
    cout << s << " " << d << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}