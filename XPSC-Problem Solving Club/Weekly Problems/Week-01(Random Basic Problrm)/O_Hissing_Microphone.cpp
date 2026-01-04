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
    int flag = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 's' && s[i + 1] == 's')
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << "hiss" << "\n";
    }
    else
    {
        cout << "no hiss" << "\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}