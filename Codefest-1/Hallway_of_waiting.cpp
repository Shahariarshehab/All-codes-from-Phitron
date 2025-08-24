#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long q;
    cin >> q;

    deque<string> qe;
    while (q--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "ARRIVE")
        {
            string name;
            cin >> name;
            qe.push_back(name);
        }
        else if (cmd == "SERVE")
        {
            if (qe.empty())
            {
                cout << "No patients" << "\n";
            }
            else
            {
                qe.pop_front();
            }
        }
        else if (cmd == "FIRST")
        {

            if (qe.empty())
            {
                cout << "No patients" << "\n";
            }
            else
            {
                cout << qe.front() << "\n";
            }
        }
        else if (cmd == "LAST")
        {

            if (qe.empty())
            {
                cout << "No patients" << "\n";
            }
            else
            {
                cout << qe.back() << "\n";
            }
        }
        else if (cmd == "SHOW")
        {

            if (qe.empty())
            {
                cout << "No patients" << "\n";
            }
            else
            {
                for (const auto &it : qe)
                {
                    cout << it << ' ';
                }
                cout << "\n";
            }
        }
        else if (cmd == "COUNT")
        {
            cout << qe.size() << "\n";
        }
    }

    return 0;
}