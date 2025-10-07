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
    int n, x;
    cin >> n >> x;
    vi v;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        v.push_back(y);
    }
    unordered_set<int> s(all(v));
    int mex = 0;
    for (int i = 0; i < x; i++)
    {
        if (!s.count(i))
        {
            mex++;
        }
    }

    if (s.count(x))
    {
        mex++;
    }
        cout << mex << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}