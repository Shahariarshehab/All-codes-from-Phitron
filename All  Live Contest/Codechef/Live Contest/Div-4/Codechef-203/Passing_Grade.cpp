#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int c = a[0];
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= c)
            {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}