#include <bits/stdc++.h>
using namespace std;
void shaharia_ar_code()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> adj_list(n);
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int node;
        cin >> node;

        if (adj_list[node].empty())
        {
            cout << -1 << "\n";
        }
        else
        {
            sort(adj_list[node].begin(), adj_list[node].end(), greater<int>());
            for (int sib : adj_list[node])
            {
                cout << sib << " ";
            }
            cout << "\n";
        }
    }
}
int main()
{
    shaharia_ar_code();
    return 0;
}