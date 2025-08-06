#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    int v;
    while (1)
    {
        cin >> v;
        if (v == -1)
        {
            break;
        }
        l.push_back(v);
    }
    l.sort();
    l.unique();
    for (int nv : l)
    {
        cout << nv << " ";
    }
    return 0;
}