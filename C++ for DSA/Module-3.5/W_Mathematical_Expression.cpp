#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, result;
    char op, eq;
    cin >> a >> op >> b >> eq >> c;
    if (op == '-')
    {
        result = a - b;
    }
    else if (op == '+')
    {
        result = a + b;
    }
    else if (op == '*')
    {
        result = a * b;
    }
    if (result == c)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << result << endl;
    }
    return 0;
}