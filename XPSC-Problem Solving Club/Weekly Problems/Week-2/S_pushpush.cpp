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

    deque<int> dq;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if ((i + 1) % 2 == 1)
        {
            dq.push_back(a);
        }
        else
        {
            dq.push_front(a);
        }
    }
    if (n % 2 == 0)
    {
        for (int i = 0; i < dq.size(); i++)
        {
            cout << dq[i] << " ";
        }
    }
    else
    {
        for (int i = dq.size() - 1; i >= 0; i--)
        {
            cout << dq[i] << " ";
        }
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