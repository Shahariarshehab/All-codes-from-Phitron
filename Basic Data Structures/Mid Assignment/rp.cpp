#include <bits/stdc++.h>
using namespace std;
void print_list(list<int> l)
{
    cout << "L -> ";
    for (int nv : l)
    {
        cout << nv << " ";
    }
    cout << endl;
    cout << "R -> ";
    list<int> temp = l;
    temp.reverse();
    for (int val : temp)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    int q;
    cin >> q;
    list<int> list;
    while (q--)
    {
        int x;
        long long v;
        cin >> x >> v;
        if (x == 0)
        {
            list.push_front(v);
        }
        else if (x == 1)
        {
            list.push_back(v);
        }
        else if (x == 2)
        {
            if (v >= 0 && v < list.size())
            {
                auto it = list.begin();
                for (int i = 0; i < v; i++)
                {
                    it++;
                }
                list.erase(it);
            }
        }
        print_list(list);
    }
    return 0;
}