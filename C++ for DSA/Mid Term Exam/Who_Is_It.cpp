#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int Id;
    char name[101];
    char sec;
    int mark;
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Student a, b, c;
        cin >> a.Id >> a.name >> a.sec >> a.mark;
        cin >> b.Id >> b.name >> b.sec >> b.mark;
        cin >> c.Id >> c.name >> c.sec >> c.mark;
        if (a.mark > b.mark && a.mark > c.mark)
        {
            cout << a.Id << " " << a.name << " " << a.sec << " " << a.mark << endl;
        }
        else if (b.mark > a.mark && b.mark > c.mark)
        {
            cout << b.Id << " " << b.name << " " << b.sec << " " << b.mark << endl;
        }
        else if (c.mark > a.mark && c.mark > b.mark)
        {
            cout << c.Id << " " << c.name << " " << c.sec << " " << c.mark << endl;
        }
        else if (a.mark == b.mark)
        {
            if (a.Id < b.Id)
            {
                cout << a.Id << " " << a.name << " " << a.sec << " " << a.mark << endl;
            }
            else
            {
                cout << b.Id << " " << b.name << " " << b.sec << " " << b.mark << endl;
            }
        }
        else if (b.mark == c.mark)
        {
            if (b.Id < c.Id)
            {
                cout << b.Id << " " << b.name << " " << b.sec << " " << b.mark << endl;
            }
            else
            {
                cout << c.Id << " " << c.name << " " << c.sec << " " << c.mark << endl;
            }
        }
        else if (c.mark == a.mark)
        {
            if (c.Id < a.Id)
            {
                cout << c.Id << " " << c.name << " " << c.sec << " " << c.mark << endl;
            }
            else
            {
                cout << a.Id << " " << a.name << " " << a.sec << " " << a.mark << endl;
            }
        }
    }
    return 0;
}