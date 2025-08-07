#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    mp["tamim"] = 2;
    mp["rahim"] = 302;
    mp["lamim"] = 500;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}