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
    vector<string> a(t);
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }

    set<string> seen;
    vector<string> f;

    for (int i = t - 1; i >= 0; i--)
    {

        if (!seen.count(a[i]))
        {
            seen.insert(a[i]);
            f.push_back(a[i]);
        }
    }
  
    for (string name : f)
    {
        cout << name << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}