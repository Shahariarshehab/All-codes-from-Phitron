#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if (a >= 'A' && a <= 'Z')
    {
        cout << "ALPHA\nIS CAPITAL" << endl;
    }
    else if (a >= 'a' && a <= 'z')
    {
        cout << "ALPHA\nIS SMALL" << endl;
    }
    else
    {
        cout << "IS DIGIT" << endl;
    }
    return 0;
}