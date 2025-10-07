#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int flag = 0;
    for (char n : s)
    {
        if (n == '7')
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "Lucky" << "\n";
    }
    else
    {
        cout << "Not Lucky" << "\n";
    }
    return 0;
}