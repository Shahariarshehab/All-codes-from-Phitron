#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        vector<int> p(a);
        int total_p = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> p[i];
        }
        sort(p.begin(), p.end(), greater<int>());
        for (int j = 0; j < b; j++)
        {
            total_p += p[j];
        }
        cout << total_p << "\n";
    }
    return 0;
}