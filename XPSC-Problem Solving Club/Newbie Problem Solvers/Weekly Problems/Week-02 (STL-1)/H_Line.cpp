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
        cin.ignore();
        string s;
        cin >> s;

        ll b = 0;
        vll a(n);

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                b += i;
                a[i] = (n - i - 1) - i;
            }
            else
            {
                b += (n - i - 1);
                a[i] = i - (n - i - 1);
            }
        }
        sort(rall(a));

        vll r(n);
        ll curr = b;
        for (int j = 0; j < n; j++)
        {
            if (a[j] > 0)
            {
                curr += a[j];
            }
            r[j] = curr;
        }
        for (int k = 0; k < n; k++)
        {
            cout << " " << r[k];
        }
        cout << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}