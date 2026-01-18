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
    int a, b;
    cin >> a >> b;
    if (a > 0 && b > 0)
    {
        cout << 1 << "\n";
    }
    else if (a < 0 && b > 0)
    {
        cout << 2 << "\n";
    }
    else if (a < 0 && b < 0)
    {
        cout << 3 << "\n";
    }
    else if (a > 0 && b < 0)
    {
        cout << 4 << "\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}