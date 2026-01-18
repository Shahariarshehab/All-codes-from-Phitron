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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(s1[i]!=s2[i])
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            HA;
        }
        else
        {
            NA;
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