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
Student fun()
{
    Student karim(2, 10, 5.00);
    return karim;
}

int main()
{

    Student obj = fun();
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    return 0;
}