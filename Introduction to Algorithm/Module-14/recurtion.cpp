#include <bits/stdc++.h>
using namespace std;
void recurtion(int a)
{
    if (a > 5)
    {
        return;
    }
    cout << a << "\n";

    recurtion(a + 1);
}
int main()
{
    recurtion(1);
    return 0;
}