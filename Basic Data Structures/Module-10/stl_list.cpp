#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int>l;
    list<int> i(10, 3); //(size,value)
    for (auto it = i.begin(); it != i.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}