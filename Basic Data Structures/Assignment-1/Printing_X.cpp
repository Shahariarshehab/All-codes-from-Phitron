#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = n / 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < m && j == i)
            {
                cout << "\\";
            }
            else if (i < m && j == n - i - 1)
            {
                cout << "/";
            }
            else if (i == m && j == m)
            {
                cout << "X";
            }
            else if (i > m && j == n - i - 1)
            {
                cout << "/";
            }
            else if (i > m && j == i)
            {
                cout << "\\";
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;
    }
    return 0;
}