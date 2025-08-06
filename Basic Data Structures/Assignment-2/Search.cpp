#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}
void search_and_print(Node *head, int sval)
{
    int idx = 0;
    while (head != NULL)
    {
        if (head->val == sval)
        {
            cout << idx << endl;
            return;
        }
        head = head->next;
        idx++;
    }
    cout << "-1" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        int val;
        while (true)
        {
            cin >> val;
            if (val == -1)
            {
                break;
            }
            insert_at_tail(head, tail, val);
        }
        int sval;
        cin >> sval;
        search_and_print(head, sval);
    }

    return 0;
}