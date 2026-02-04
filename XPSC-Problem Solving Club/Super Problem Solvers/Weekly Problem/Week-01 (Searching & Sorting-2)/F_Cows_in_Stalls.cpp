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
bool ok(vll &a,int n,int k,ll mid)
{
    int p=1;
    ll pos=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]-pos>=mid)
        {
            p++;
            pos=a[i];
        }
        if(p==k)
        {
            return true;
        }
    }
    return false;
}
void Shaharia_ar_solve()
{
    int n, k;
    cin >> n >> k;
    vll a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l=0;
    ll r=a[n-1]-a[0];
    ll ans=0;
    while(l<=r)
    {
        ll mid=l+(r-l)/2;
        if(ok(a,n,k,mid))
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<ans<<nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        Shaharia_ar_solve();
    }
    return 0;
}