#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<string> l;
    string s;
    while (cin >> s && s != "end")
    {
        l.push_back(s);
    }
    int q;
    cin >> q;
    cin.ignore();
    auto curr = l.begin();
    while (q--)
    {
        string cmnd;
        getline(cin, cmnd);
        if (cmnd.substr(0, 5) == "visit")
        {
            string adrs = cmnd.substr(6);
            bool found = false;
            for (auto it = l.begin(); it != l.end(); it++)
            {
                if (*it == adrs)
                {
                    curr = it;
                    cout << *curr << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Not Available" << endl;
            }
        }
         else if (cmnd == "next")
            {
                auto tmp = curr;
                tmp++;
                if (tmp != l.end())
                {
                    curr = tmp;
                    cout << *curr << endl;
                }
                else
                {
                    cout << "Not Available" << endl;
                }
            }
            else if (cmnd == "prev")
            {
                if (curr != l.begin())
                {
                    curr--;
                    cout << *curr << endl;
                }
                else
                {
                    cout << "Not Available" << endl;
                }
            }
    }
    return 0;
}