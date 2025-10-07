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
        int min = n - 2;
        int max = (n - 1) * (n - 2) / 2;

        cout << min << " " << max << "\n";
    }
    return 0;
}