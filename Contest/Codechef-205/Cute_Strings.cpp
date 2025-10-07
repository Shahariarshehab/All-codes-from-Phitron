#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s.length() == 3 && s[0] == s[2] && s[1] == 'w')
    {
        cout << "Cute" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }
    return 0;
}