#include <bits/stdc++.h>
using namespace std;

#define ll       long long
#define nl       '\n'
#define sz(x)    (x).size()
#define arrsz(x) (sizeof(x) / sizeof(x[0]))
#define all(x)   (x).begin(), (x).end()
#define rall(x)  (x).rbegin(), (x).rend()
#define HA       cout << "YES" << nl
#define NA       cout << "NO" << nl

const int MOD = 1e9 + 7;
const int MAXN = 1e6 + 5;
const long long INF = 1e18;

void sayedErSolve(int tc)
{
    // Your solution logic here
    int n;
    cin >> n;
    vector <int> v(n+1);
    set <int> st;
    map <int,int> mp;
    bool one = false;
    for(int i=1; i<=n; i++)
    {
        cin >> v[i];
        st.insert(v[i]);
        mp[v[i]]++;
        if(v[i]==1) one = true;
    }

    int cnt = -1;
    int mx;
    for(int val : st)
    {
        if(cnt < mp[val])
        {
            cnt = mp[val];
            mx = val;
        }
    }
    
    int ans;
    if(cnt>1)
    {
        if(mx==1) ans = n-cnt;
        else ans = 1+(n-cnt);
    }
    else
    {
        if(one) ans = n-1;
        else ans = n;
    }
    cout << ans << nl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        sayedErSolve(tc);
    }

    return 0;
}