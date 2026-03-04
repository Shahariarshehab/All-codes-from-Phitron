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
    string s;
    cin >> s;
    int n = s.size();
    if (s[n - 3] == 'n' && s[n - 2] == 't' && s[n-1] == 'a')
    {
        cout << "Yes" << nl;
    }
    else
    {
        cout << "No" << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        Shaharia_ar_solve();
    }
    return 0;
}