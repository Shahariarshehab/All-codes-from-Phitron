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
    int n, m, k;
    cin >> n >> m >> k;
    vll a(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    vll l(m+1),r(m+1),d(m+1);
    for(int i=1;i<=m;i++)
    {
        cin>>l[i]>>r[i]>>d[i];
    }
    vll b(m+3);
    for(int i=1;i<=k;i++)
    {
        int x,y;
        cin>>x>>y;
        b[x]+=1;
        b[y+1]-=1;
    }

    for(int i=1;i<=m;i++)
    {
        b[i]+=b[i-1];
    }
    vll c(n+3);
    for(int i=1;i<=m;i++)
    {
        ll t=b[i];
        c[l[i]]+=d[i]*t;
        c[r[i]+1]-=d[i]*t;
    }
    for(int i=1;i<=n;i++)
    {
        c[i]+=c[i-1];
        a[i]+=c[i];
    }
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}