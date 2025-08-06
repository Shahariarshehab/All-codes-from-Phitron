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
       vector <int> a(100), b(100);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }
        int c = 0;
        for (int k = 0; k < n; k++)
        {
            if (a[k] > b[k])
            {
                c += (a[k] - b[k]);
            }
        }
        cout << c << endl;
    }
    return 0;
}