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
        int size = 0;
        int idx;
        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            if (a > size)
            {
                size = a;
                idx = i;
            }
        }
        cout << idx << "\n";
    }
    return 0;
}