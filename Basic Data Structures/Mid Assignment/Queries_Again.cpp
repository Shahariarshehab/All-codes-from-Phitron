#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_forward(Node *head)
{
    cout << "L -> ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_backward(Node *tail)
{
    cout << "R -> ";
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int size_is(Node *head)
{
    int size = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        size++;
        tmp = tmp->next;
    }
    return size;
}
void insert_at_pos(Node *&head, Node *&tail, int pos, int val)
{
    int size = size_is(head);
    if (pos < 0 || pos > size)
    {
        cout << "Invalid" << endl;
        return;
    }

    Node *newnode = new Node(val);
    if (pos == 0)
    {
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }
    else if (pos == size)
    {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
    else
    {
        Node *tmp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            tmp = tmp->next;
        }
        newnode->next = tmp->next;
        tmp->next->prev = newnode;
        tmp->next = newnode;
        newnode->prev = tmp;
    }
    print_forward(head);
    print_backward(tail);
}

int main()
{
    int q;
    cin >> q;

    Node *head = NULL;
    Node *tail = NULL;

    while (q--)
    {
        int x, v;
        cin >> x >> v;
        insert_at_pos(head, tail, x, v);
    }

    return 0;
}