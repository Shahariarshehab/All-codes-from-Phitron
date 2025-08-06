#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s.size() < 3 || s.size() > 3)
    {
        cout << "NO" << endl;
        return 0;
    }
    sort(s.begin(), s.end());

    string s1 = "cat";
    sort(s1.begin(), s1.end());

    if (s == s1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}