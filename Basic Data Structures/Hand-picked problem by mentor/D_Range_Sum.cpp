#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--)
    {
        ll l,r;
        cin >> l >> r;
        if(l>r) swap(l,r);
        ll sum_l = (l*(l-1))/2;
        ll sum_r = (r*(r+1))/2;
        cout << abs(sum_r - sum_l) << endl;
    }
    return 0;
}