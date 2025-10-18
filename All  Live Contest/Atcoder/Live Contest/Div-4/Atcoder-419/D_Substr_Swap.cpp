#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    string s;
    string t;
    cin >> s >> t;
    vector<int> v(n + 1, 0);
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        v[l]+=1;
        v[r+1]-=1;
    }
    int cur=0;
    for(int i=0;i<n;i++)
    {
        cur+=v[i];
        if(cur%2==1)
        {
            swap(s[i],t[i]);
        }
    }
    cout << s << "\n";
    return 0;
}