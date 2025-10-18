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
        vi alice(n);
        vi bob(n);
        for (int i = 0; i < n; i++)
        {
            cin >> alice[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> bob[j];
        }
        int cnt = 0;
        for (int k = 0; k < n; k++)
        {
            if (alice[k] <= 2 * bob[k]&& bob[k]<=2*alice[k])
            {
                cnt++;
            }
          
        }
        cout << cnt << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}