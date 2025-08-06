#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;
    vector<int> a1(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a1[i];
    }

    int p;
    cin >> p;
    a.insert(a.begin() + p, a1.begin(), a1.end());
    for (int num : a)
    {
        cout << num << " ";
    }
    return 0;
}