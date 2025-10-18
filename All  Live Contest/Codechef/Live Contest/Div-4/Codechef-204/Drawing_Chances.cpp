#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        string s;
        cin >> s;
        int flag = 0;
        int cnt1 = 0, cnt0 = 0;
        if (m % 2 != 0)
        {
            flag = 1;
        }
        else
        {
            for (char c : s)
            {
                if (c == '0')
                {
                    cnt0++;
                }
                else if (c == '1')
                {
                    cnt1++;
                }
            }
            if (cnt1 > m / 2 || cnt0 > m / 2)
            {
                flag = 1;
            }
        }

        if (flag == 0)
        {
            cout << "Yes" << "\n";
        }
        else
        {
            cout << "No" << "\n";
        }
    }
    return 0;
}