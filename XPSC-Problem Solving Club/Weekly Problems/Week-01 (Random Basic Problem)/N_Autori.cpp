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
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (i == 0 || s[i - 1] == '-')
        {
            cout << s[i];
        }
    }
    cout << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}