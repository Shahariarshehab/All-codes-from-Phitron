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
    int n, q;
    cin >> n >> q;
    multiset<ll> s;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }
    for(int i=0;i<q;i++)
    {
        int t;
        cin>>t;
         if (t == 0)
        {
            ll x;
            cin >> x;
            s.insert(x);
           
        }
        else if (t == 1)
        {
            auto it =s.begin();
            cout<<*it<<nl;
            s.erase(it);
        }
        else if (t == 2)
        {
           auto it= s.rbegin();
           cout<<*it<<nl;
           s.erase(--s.end());
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