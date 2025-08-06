#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    int d[3] = {A, B, C};
    sort(d, d + 3);
    for (int i = 0; i < 3; i++)
    {
        cout << d[i] << endl;
    }
    cout << endl;
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;

    return 0;
}