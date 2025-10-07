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

void Shaharia_ar_solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi p(n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            p.push_back(x);
            if (x == 1)
            {
                cnt++;
            }
        }
        if (cnt <= 1)
        {
            cout << n << "\n";
        }
        else
        {
            cout << n - cnt/2 << "\n";
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