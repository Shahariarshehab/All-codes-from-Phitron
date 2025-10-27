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
    string s;
    cin >> s;
    int n = s.size();
    map<char, int> mp;
    for (int c : s)
        mp[c]++;

    bool taken = false;

    for (auto [x, y] : mp)
    {
        if (y % 2 == 1)
        {
            if (n % 2 == 1)
            {
                if (!taken)
                    taken = true;
                else
                {
                    cout << "NO SOLUTION" << nl;
                    return;
                }
            }
            else
            {
                cout << "NO SOLUTION" << nl;
                return;
            }
        }
    }

    string mid;

    string pref = "";
    for (auto [x, y] : mp)
    {
        int k = y / 2;
        while (k--)
        {
            pref.push_back(x);
        }
        if (y % 2 == 1)
        {
            mid = x;
        }
    }
    string suff = pref;
    reverse(all(suff));

    if (n % 2 == 0)
    {
        cout << pref + suff << nl;
    }
    else
    {
        cout << pref + mid + suff << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}