#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char sec;
    int id;
    int math;
    int eng;
};
bool cmp(Student a, Student b)
{
    if (a.math + a.eng > b.math + b.eng)
    {
        return true;
    }
    else if (a.math + a.eng < b.math + b.eng)
    {
        return false;
    }
    else
    {
        if (a.id < b.id)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    Student *student = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cin >> student[i].name >> student[i].cls >> student[i].sec >> student[i].id >> student[i].math >> student[i].eng;
    }
    sort(student, student + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << student[i].name << " " << student[i].cls << " " << student[i].sec << " " << student[i].id << " " << student[i].math << " " << student[i].eng << endl;
    }
    delete[] student;
    return 0;
}