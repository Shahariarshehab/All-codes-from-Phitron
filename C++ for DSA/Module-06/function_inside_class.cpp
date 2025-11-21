#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int math;
    int english;
    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
    void total()
    {
        cout << "Total mark of " << name << " = " << math + english << endl;
    }
};
int main()
{
    Student shakib("Shakib Ahmed", 23, 82, 95);
    Student Rakib("Rakib Ahmed", 25, 87, 98);
    shakib.total();
    Rakib.total();
    return 0;
}