#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;
    bool result = (s == '>' && a > b) || (s == '<' && a < b) || (s == '=' && a == b);
    cout << (result ? "Right" : "Wrong") << endl;
    return 0;
}