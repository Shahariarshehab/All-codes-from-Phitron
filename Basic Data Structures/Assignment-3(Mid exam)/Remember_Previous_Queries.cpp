#include <bits/stdc++.h>
using namespace std;
void print_list(list<int> l)
{
    cout << "L ->" << " ";
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "R ->" << " ";
    list<int> tmp = l;
    tmp.reverse();
    for (int val : tmp)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    int q;
    cin >> q;

    list<int> l;

    while (q--)
    {
        int x;
        long long v;
        cin >> x >> v;
        if (x == 0)
        {
            l.push_front(v);
        }
        else if (x == 1)
        {
            l.push_back(v);
        }
        else if (x == 2)
        {
            if (v >= 0 && v < l.size())
            {
                auto it = l.begin();
                for (int i = 0; i < v; i++)
                {
                    it++;
                }
                l.erase(it);
            }
        }
        print_list(l);
    }

    return 0;
}