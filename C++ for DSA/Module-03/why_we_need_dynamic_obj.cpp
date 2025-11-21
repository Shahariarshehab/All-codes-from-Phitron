#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};
Student *fun()
{
    Student karim(2, 10, 5.00);
    Student *p = &karim;
    return p;
}

int main()
{

    Student *p = fun();
    cout << (*p).roll << " " << (*p).cls << " " << (*p).gpa << endl;
    cout << p->roll << " " << p->cls << " " << p->gpa << endl;
    return 0;
}