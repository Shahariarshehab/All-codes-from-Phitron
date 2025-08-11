#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        map<string, int> fre;
        string m_fre;
        int cnt = 0;
        while (ss >> word)
        {
            fre[word]++;
            if (fre[word] > cnt)
            {
                cnt = fre[word];
                m_fre = word;
            }
        }
        cout << m_fre << " " << cnt << "\n";
    }
    return 0;
}