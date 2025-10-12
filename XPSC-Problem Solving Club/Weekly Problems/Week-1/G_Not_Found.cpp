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
    sort(s.begin(), s.end());
    bool search[26] = {false};
    for (char ch : s)
    {
        search[ch - 'a'] = true;
    }

    for (int i = 0; i < 26; i++)
    {
        if (!search[i])
        {
            cout << char('a' + i) << "\n";
            return;
        }
    }
    cout << "None\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}