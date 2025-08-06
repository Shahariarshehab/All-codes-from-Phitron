#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;
    if (s != '>' || s != '<' || s != '=')
    {
        cout << "Wrong" << endl;

        if (s == '>')
        {
            if (a > b)
            {
                cout << "Right" << endl;
            }
            else
            {
                cout << "Wrong" << endl;
            }
        }

        else if (s == '<')
        {
            if (a < b)
            {
                cout << "Right" << endl;
            }
            else
            {
                cout << "Wrong" << endl;
            }
        }
        else if (s == '=')
        {
            if (a = b)
            {
                cout << "Right" << endl;
            }
            else
            {
                cout << "Wrong" << endl;
            }
        }
    }
    return 0;
}