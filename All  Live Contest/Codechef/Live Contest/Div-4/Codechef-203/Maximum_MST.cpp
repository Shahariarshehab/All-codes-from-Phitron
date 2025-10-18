#include <bits/stdc++.h>
using namespace std;
int fact(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    return fact;
}
int calc(int n)
{
    return fact(n) / (fact(2) * fact(n - 2));
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int e = (n * n - 1) / 2;
        vector<int> v(e);
        int x = 0;
        for (int i = 0; i < e; i++)
        {
            cin >> v[i];
            if (e == 1)
            {
                cout << v[i] << "\n";
            }
        }
        cout << calc(e) << "\n";
    }

    return 0;
}