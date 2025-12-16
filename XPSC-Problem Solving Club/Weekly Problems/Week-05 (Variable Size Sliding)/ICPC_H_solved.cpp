
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define nl '\n'

void Shaharia_ar_solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        set<int> s;
        int a, b;
        cin >> a >> b;
        s.insert(a);
        s.insert(b);
        while (m--)
        {
            int x, y, z;
            cin >> x >> y >> z;
            if (s.find(x) != s.end() || s.find(y) != s.end())
            {
                s.insert(z);
            }
        }
        cout << s.size() << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}