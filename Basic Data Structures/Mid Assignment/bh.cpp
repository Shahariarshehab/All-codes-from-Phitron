#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<string> list;
    string s;
    while (cin >> s && s != "end")
    {
        list.push_back(s);
    }
    int q;
    cin >> q;
    cin.ignore();

    auto current = list.begin();
    while (q--)
    {
        string cmd;
        getline(cin, cmd);
        if (cmd.substr(0, 5) == "visit")
        {
            string adress = cmd.substr(6);
            int found = 1;

            for (auto it = list.begin(); it != list.end(); it++)
            {
                if (*it == adress)
                {
                    current = it;
                    cout << *current << endl;
                    found = 0;
                    break;
                }
            }
            if (found==1)
            {
                cout << "Not Available" << endl;
            }
        }
         else if (cmd == "next")
            {
                auto temp = current;
                ++temp;
                if (temp != list.end())
                {
                    current = temp;
                    cout << *current << endl;
                }
                else
                {
                    cout << "Not Available" << endl;
                }
            }
            else if (cmd == "prev")
            {
                if (current != list.begin())
                {
                    --current;
                    cout << *current << endl;
                }
                else
                {
                    cout << "Not Available" << endl;
                }
            }
    }
    return 0;
}