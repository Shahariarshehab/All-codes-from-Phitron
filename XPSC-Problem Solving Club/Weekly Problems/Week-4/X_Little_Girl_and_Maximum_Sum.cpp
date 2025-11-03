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
    int n,q;
    cin>>n>>q;
    vi a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }   
    vi d(n+1);
    for(int i=0;i<q;i++)
    {
        int l,r;
        cin>>l>>r;
        l--,r--;
        d[l]++;
        d[r+1]--;
    }
    for(int i=1;i<=n;i++)
    {
        d[i]=d[i-1]+d[i];
    }
    sort(rall(a));
    sort(rall(d));
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=(1ll*a[i]*d[i]);
    }
    cout<<ans<<nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}