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
    // // pair<string,int> student=make_pair("shaharia",200);
    // pair<string, int> student = {"shaharia", 200};
    // // cout<<student.first<<" "<<student.second<<nl;
    // auto [name, roll] = student;
    // cout << name << " " << roll << nl;
    int n;
    cin >> n;
    pair<string, int> students[n];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].first >> students[i].second;
    }
    for (int i = 0; i < n; i++)
    {
        cout << students[i].first << " " << students[i].second << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}