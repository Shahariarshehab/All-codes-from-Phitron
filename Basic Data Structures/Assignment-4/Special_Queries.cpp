#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    queue<string> tl;
    while (q--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            string name;
            cin >> name;
            tl.push(name);
        }
        else if (cmd == 1)
        {
            if (!tl.empty())
            {
                cout << tl.front() << endl;
                tl.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }
    return 0;
}