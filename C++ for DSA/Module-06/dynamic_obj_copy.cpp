#include <bits/stdc++.h>
using namespace std;
class cricketer
{
public:
    string country;
    int jersey;
    cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};
int main()
{
    cricketer *dhoni = new cricketer("INDIA", 100);
    cricketer *kohli = new cricketer("INDIA", 18);
    *kohli = *dhoni;
    delete dhoni;
    cout << kohli->country << " " << kohli->jersey;

    return 0;
}