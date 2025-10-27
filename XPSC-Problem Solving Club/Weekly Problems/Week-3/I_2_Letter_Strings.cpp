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

        ll cnt[11][11] = {};
        ll a = 0;

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            int x = s[0] - 'a';
            int y = s[1] - 'a';
            for (int j = 0; j < 11; j++)
            {
                if (j == x)
                {
                    continue;
                }

                a += cnt[j][y];
            }
            for (int j = 0; j < 11; j++)
            {
                if (j == y)
                {
                    continue;
                }

                a += cnt[x][j];
            }
            cnt[x][y]++;
        }
        cout << a << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}