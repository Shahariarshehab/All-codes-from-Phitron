#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int total = x + y;
        int t = total / 3;
        int score;
        if (y >= t)
        {
            score = t * 2;
        }
        else
        {
            score = y * 2 + (t - y) * 1;
        }
        cout << score << "\n";
    }
    return 0;
}