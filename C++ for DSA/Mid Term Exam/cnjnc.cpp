#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int ID;
    char name[100];
    char sec;
    int num;
};
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        Student s, r, a;
        cin >> s.ID >> s.name >> s.sec >> s.num;
        cin >> r.ID >> r.name >> r.sec >> r.num;
        cin >> a.ID >> a.name >> a.sec >> a.num;
        if (s.num > r.num && s.num > a.num)
        {
            cout << s.ID << " " << s.name << " " << s.sec << " " << s.num << endl;
        }
        else if (r.num > s.num && r.num > a.num)
        {
            cout << r.ID << " " << r.name << " " << r.sec << " " << r.num << endl;
        }
        else if (a.num > s.num && a.num > r.num)
        {
            cout << a.ID << " " << a.name << " " << a.sec << " " << a.num << endl;
        }
        else if (s.num == r.num)
        {
            if (s.ID > r.ID)
            {
                cout << r.ID << " " << r.name << " " << r.sec << " " << r.num << endl;
            }
            else
            {
                cout << s.ID << " " << s.name << " " << s.sec << " " << s.num << endl;
            }
        }
        else if (s.num == a.num)
        {
            if (s.ID > a.ID)
            {
                cout << a.ID << " " << a.name << " " << a.sec << " " << a.num << endl;
            }
            else
            {
                cout << s.ID << " " << s.name << " " << s.sec << " " << s.num << endl;
            }
        }
        else if (r.num == a.num)
        {
            if (r.ID > a.ID)
            {
                cout << a.ID << " " << a.name << " " << a.sec << " " << a.num << endl;
            }
            else
            {
                cout << r.ID << " " << r.name << " " << r.sec << " " << r.num << endl;
            }
        }
    }
    return 0;
}