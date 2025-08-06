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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sort = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                sort = 1;
                break;
            }
        }
        if (sort == 0)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}