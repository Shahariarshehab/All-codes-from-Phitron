#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class Studentcmp
{
public:
    bool operator()(const Student &a, const Student &b)
    {
        if (a.marks != b.marks)
        {
            return a.marks < b.marks;
        }
        return a.roll > b.roll;
    }
};
void clean_top(priority_queue<Student, vector<Student>, Studentcmp> &pq, unordered_set<int> &del)
{
     while (!pq.empty() && del.count(pq.top().roll))
    {
        pq.pop();
    }
}
void printTop(priority_queue<Student, vector<Student>, Studentcmp> &pq, unordered_set<int> &del)
{
    clean_top(pq,del);
   
    if (pq.empty())
    {
        cout << "Empty" << "\n";
    }
    else
    {
        Student top = pq.top();
        cout << top.name << " " << top.roll << " " << top.marks << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, Studentcmp> pq;
    unordered_set<int> del;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        int marks;
        cin >> name >> roll >> marks;
        pq.push(Student(name, roll, marks));
    }
    int q;
    cin >> q;
    while (q--)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            pq.push(Student(name, roll, marks));
            printTop(pq, del);
        }
        else if (cmd == 1)
        {
            printTop(pq, del);
        }
        else if (cmd == 2)
        {
            clean_top(pq,del);
            if (!pq.empty())
            {
                del.insert(pq.top().roll);
                pq.pop();
            }
            printTop(pq, del);
        }
        else
        {
            cout << "Empty" << "\n";
        }
    }
    return 0;
}