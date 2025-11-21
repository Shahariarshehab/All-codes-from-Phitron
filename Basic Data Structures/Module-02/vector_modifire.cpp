#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 2, 4, 5, 2};
    // vector<int> v2;
    // v2 = v;
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }
    // v.pop_back();
    // replace(v.begin(), v.end()-1, 2, 100);
    auto it = find(v.begin(), v.end(), 100);
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }
    // if (it == v.end())
    // {
    //     cout << "not found";
    // }
    // else
    // {
    //     cout << "found";
    // }
    cout << *it << endl;
    return 0;
}