#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Jessica";
    string x;
    getline(cin, x);
    stringstream a(x);
    string f;
    int flag = 0;
    while (a >> f)
    {
        if (s == f)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}