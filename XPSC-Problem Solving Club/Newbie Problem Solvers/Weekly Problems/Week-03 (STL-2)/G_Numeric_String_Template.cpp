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
        int n;
        cin >> n;
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int m;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            string s;
            cin >> s;

            if (s.size() != n)
            {
                NA;
                continue;
            }

            map<int, char> n2l;
            map<char, int> l2n;
            bool flag = false;
            for (int k = 0; k < n; k++)
            {
                int num = a[k];
                char let = s[k];

                if (n2l.count(num))
                {
                    if (n2l[num] != let)
                    {
                        flag = true;
                        break;
                    }
                }
                if (l2n.count(let))
                {
                    if (l2n[let] != num)
                    {
                        flag = true;
                        break;
                    }
                }
                n2l[num] = let;
                l2n[let] = num;
            }
            if (flag)
            {
                NA;
            }
            else
            {
                HA;
            }
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