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
    int freq[101] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }
    int idx = 0;
    for (int i = 0; i < 100; i++)
    {
        while (freq[i] > 0)
        {
            a[idx++] = i;
            freq[i]--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
