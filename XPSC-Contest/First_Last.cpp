#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long int> v;
    vector<long long int> dis;
    map<long long int, pair<int, int>> idx;
    map<long long int, bool> vis;
    for (int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        v.push_back(x);

        if (!vis[x])
        {
            dis.push_back(x);
            vis[x] = true;
            idx[x] = {i + 1, i + 1};
        }
        else
        {
            idx[x].second = i + 1;
        }
    }
    sort(dis.begin(), dis.end());
    for (long long int dis_val : dis)
    {
        cout << dis_val << " " << idx[dis_val].first << " " << idx[dis_val].second << "\n";
    }

    return 0;
}