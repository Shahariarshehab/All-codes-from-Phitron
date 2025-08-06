#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    bool empty()
    {
        return l.empty();
    }
};
class myStack
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    bool empty()
    {
        return l.empty();
    }
};
int main()
{
    myQueue q;
    myStack s;
    int n,m;
    cin >> n>>m;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }
    while (!s.empty() && !q.empty())
    {
        if (s.top() != q.front())
        {
            cout << "NO" << endl;
            return 0;
        }
        s.pop();
        q.pop();
    }
    if (s.empty() && q.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}