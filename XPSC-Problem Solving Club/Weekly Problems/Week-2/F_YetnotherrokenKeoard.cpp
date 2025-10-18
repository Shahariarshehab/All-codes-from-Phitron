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
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        string s1 = "";
        int l = 0, h = 0;

        for (int i = s.size() - 1; i >= 0; i--)
        {
            char ch = s[i];
            if (ch == 'b')
            {
                l++;
            }
            else if (ch == 'B')
            {
                h++;
            }
            else
            {
                if (ch >= 'a' && ch <= 'z')
                {
                    if (l > 0)
                    {
                        l--;
                    }
                    else
                    {
                        s1 += ch;
                    }
                }
                else if (ch >= 'A' && ch <= 'Z')
                {
                    if (h > 0)
                    {
                        h--;
                    }
                    else
                    {
                        s1 += ch;
                    }
                }
            }
        }
        reverse(all(s1));
        cout << s1 << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}