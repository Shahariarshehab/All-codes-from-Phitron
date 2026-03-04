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
    int n, k;
    cin >> n >> k;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    auto ok = [&](int x)
    {
        if (x == 0)
        {
            return true;
        }
        vi freq(x, 0);
        int need = x;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < x)
            {
                if (freq[a[i]] == 0)
                {
                    need--;
                }
                freq[a[i]]++;
            }
            if (need == 0)
            {
                cnt++;
                if (cnt >= k)
                {
                    return true;
                }
                fill(all(freq), 0);
                need = x;
            }
        }
        return false;
    };
    int l = 0, r = n + 1, mid = 0, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        Shaharia_ar_solve();
    }
    return 0;
}