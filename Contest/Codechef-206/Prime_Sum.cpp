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
        int a, ones = 0, twos = 0, threes = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a == 1)
            {
                ones++;
            }
            else if (a == 2)
            {
                twos++;
            }
            else if (a == 3)
            {
                threes++;
            }
        }
        int pairs = 0;
        pairs += (ones * (ones - 1)) / 2;
        pairs += (ones * twos);
        pairs += (twos * threes);

        cout << pairs << "\n";
    }
    return 0;
}