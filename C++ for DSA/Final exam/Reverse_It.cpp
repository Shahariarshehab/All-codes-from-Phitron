#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char sec;
    int id;
};
int main()
{
    int n;
    cin >> n;
    Student *students = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].cls >> students[i].sec >> students[i].id;
    }
    int i = 0;
    int j = n - 1;

    while (j > i)
    {
        swap(students[i].sec, students[j].sec);
        j--;
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << " " << students[i].cls << " " << students[i].sec << " " << students[i].id << endl;
    }
    delete[] students;
    return 0;
}