#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s, x;
        getline(cin, s, ' ');
        getline(cin, x);
        string f = "";
        int i = 0;
        while (i < s.length())
        {
            if (s.substr(i, x.length()) == x)
            {
                f += "#";
                i += x.length();
            }
            else
            {
                f += s[i];
                i++;
            }
        }
        cout << f << endl;
    }
    return 0;
}