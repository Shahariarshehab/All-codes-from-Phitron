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
ll min_divisor(ll i)
{
    for(ll d=2;d*d<=i;d++)
    {
        if(i%d==0)
        {
            return d;
        }
    }
    return i;
}
void Shaharia_ar_solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        bool found=false;

        for(ll i=l;i<=r;i++)
        {
            ll mnd=min_divisor(i);
            if(mnd!=i)
            {
                cout<<mnd<<" "<<i-mnd<<nl;
                found=true;
                break;
            }
        }
        if(!found)
        {
            cout<<-1<<nl;
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