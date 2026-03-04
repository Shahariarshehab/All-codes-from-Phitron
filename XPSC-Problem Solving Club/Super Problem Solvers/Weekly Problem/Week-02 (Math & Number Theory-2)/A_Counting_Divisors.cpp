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
const int maxN = 1e6 + 9;
vi divisors(maxN);

void Shaharia_ar_solve()
{
    int n;
    cin >> n;
    cout << divisors[n] << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int i = 1; i < maxN; i++)
    {
        for (int j = i; j < maxN; j += i)
        {
            divisors[j]++;
        }
    }
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        Shaharia_ar_solve();
    }
    return 0;
}