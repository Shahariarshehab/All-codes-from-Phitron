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
        int n, x, k;
        cin >> n >> x >> k;
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(rall(a));
       
        int j = 0;
        while (j < n && k > 0 && a[j] > x)
        {
            k--;
            x += 100;
            j++;
        }
        int cnt=0;
        for(int i=j;i<n;i++)
        {
            if(a[i]>x)
            {
                cnt++;
            }
        }

        cout << cnt + 1 << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}