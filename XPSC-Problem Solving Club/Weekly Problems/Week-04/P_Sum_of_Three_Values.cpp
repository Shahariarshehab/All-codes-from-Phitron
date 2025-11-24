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
    int n, x;
    cin >> n >> x;
    vector<pair<ll,int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second=i+1;
    }
    sort(all(a));
    for (int i = 0; i < n; i++)
    {
        int l=i+1,r=n-1;
       while(l<r)
        {
            ll b =a[i].first+a[l].first+a[r].first;
            if (b==x)
            {
                vi c={ a[i].second, a[l].second, a[r].second};
                sort(all(c));
                cout << c[0] << " " <<c[1] << " " << c[2] << nl;
                return;
            }
            else if(b<x)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    cout << "IMPOSSIBLE" << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}