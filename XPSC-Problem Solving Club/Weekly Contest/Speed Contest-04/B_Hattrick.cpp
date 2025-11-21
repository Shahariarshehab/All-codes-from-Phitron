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
        char s[6];
        for(int i=0;i<6;i++)
        {
            cin>>s[i];
        }
        bool flag = false;
        for (int i = 0; i < 6; i++)
        {
            if (s[i] == 'W' && s[i + 1] == 'W' && s[i + 2] == 'W')
            {
                flag = true;
            }
        }
        if (flag)
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