// بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Md.Shaharia Islam
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define ff first
#define ss second
#define nl '\n'
#define HA cout << "YES" << nl
#define NA cout << "NO" << nl

void Shaharia_ar_solve()
{
    int n, m;
    cin >> n >> m;
    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    for(int i=0;i<m;i++)
    {
        int y;
        cin>>y;

        auto it=s.upper_bound(y);

        if(it==s.begin())
        {
            cout<<"-1"<<nl;
        }
        else
        {
            it--;
            cout<<*it<<nl;
            s.erase(it);
        }
    }

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}