// بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Md.Shaharia Islam
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
bool check_kth_bit_on_or_off(int n, int k)
{
    return ((n >> k) & 1);
}

void print_on_and_off_bits(int n)
{
    for (int k = 7; k >= 0; k--)
    {
        if (check_kth_bit_on_or_off(n, k))
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
}

int turn_on_kth_bit(int n, int k)
{
    return (n | (1 << k));
}

int turn_off_kth_bit(int n, int k)
{
    return (n & (~(1 << k)));
}

int toggle_kth_bit(int n, int k)
{
    return (n ^ (1 << k));
}
void Shaharia_ar_solve()
{
    cout << check_kth_bit_on_or_off(45, 4) << nl;
    print_on_and_off_bits(45);
    cout << nl;
    cout << turn_on_kth_bit(45, 4) << nl;
    cout << turn_off_kth_bit(45, 3) << nl;
    cout << toggle_kth_bit(45, 4) << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Shaharia_ar_solve();

    return 0;
}