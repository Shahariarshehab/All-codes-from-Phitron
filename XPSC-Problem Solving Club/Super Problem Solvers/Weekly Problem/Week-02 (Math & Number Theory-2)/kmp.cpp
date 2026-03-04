#include <bits/stdc++.h>
using namespace std;
void lpss(const string patt, int m, int lps[])
{
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < m)
    {

        if (patt[i] == patt[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}
void kmp(string s, string patt)
{

    int n = s.size();
    int m = patt.size();
    int lps[m];
    lpss(patt, m, lps);
    int i = 0, j = 0;
    bool ok = false;
    int cnt = 0;
    while (i < n)
    {

        if (patt[j] == s[i])
        {

            i++;
            j++;
            if (j == m)
            {

                cout << "Pattern found at index:- " << i - j << "\n";
                j = lps[j - 1];
                cnt++;
                ok = true;
            }
        }

        else if (i < n && patt[j] != s[i])
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                i++;
            }
        }
    }
    cout << "Match Found " << cnt << " Times" << "\n";
    if (!ok)
    {
        cout << "Not found" << "\n";
    }
}
int main()
{
    string s, patt;
    cin >> s >> patt;
    kmp(s, patt);
}
