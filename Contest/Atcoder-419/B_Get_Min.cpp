#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    multiset<int>b;
    while (q--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 1)
        {
            int x;
            cin >> x;
            b.insert(x);
        }
        else if (cmd == 2)
        {
            cout << *b.begin() << "\n";
            b.erase(b.begin());
        }
    }
    return 0;
}