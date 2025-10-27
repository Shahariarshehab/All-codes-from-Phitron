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
    int n,costomer_no=1;
    cin>>n;
    set<pii>s;
    multiset<pii>ml;
    vi ans;
    for(int i=1;i<=n;i++)
    {
        int type;
        cin>>type;

        if(type==1)
        {
            int money;
            cin>>money;
            s.insert({costomer_no,money});
            ml.insert({money,-costomer_no});
            costomer_no++;
        }
        else if(type==2)
        {
            int pos=s.begin()->first,money= s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ml.erase({money,-pos});
        }
        else
        {
            int pos=-ml.rbegin()->second,money=ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end());
            s.erase({pos,money});
        }
    }   
    for(auto value:ans)
    {
        cout<<value<<" ";
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