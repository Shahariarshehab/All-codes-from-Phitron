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
    while (t--)
    {
        string s;
        cin >> s;
        int mt = -1;
        string s1 = "";

        for (int i = 0; i <= s.size(); i++)
        {
            for (char c = 'a'; c <= 'z'; c++)
            {
                string tmp = s;
                tmp.insert(tmp.begin() + i, c);

                int time = 2;
                for (int j = 1; j < tmp.size(); j++)
                {
                    if (tmp[j] == tmp[j - 1])
                    {
                        time += 1;
                    }
                    else
                    {
                        time += 2;
                    }
                }
                if (time > mt)
                {
                    mt = time;
                    s1 = tmp;
                }
            }
        }
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