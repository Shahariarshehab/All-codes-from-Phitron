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
    list<int> l;
    for (int i = 1; i <= n; i++)
    {
        l.push_back(i);
    }
    vi a;
    auto it = l.begin();
    bool flag = false;

    while (!l.empty())
    {
        if (flag)
        {
            a.push_back(*it);
            it = l.erase(it);
            if (it == l.end())
            {
                it = l.begin();
            }
        }
        else
        {
            it++;
            if (it == l.end())
            {
                it = l.begin();
            }
        }
        flag = !flag;
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}