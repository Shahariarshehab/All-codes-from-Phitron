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
void print_from_left(Node *head)
{
    cout << "L -> ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void print_from_right(Node *tail)
{
    cout << "R -> ";
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
int its_size(Node *head)
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
void insert_at_position(Node *&head, Node *&tail, int p, int v)
{
    int size = its_size(head);
    if (p < 0 || p > size)
    {
        cout << "Invalid" << endl;
        return;
    }
    Node *newnode = new Node(v);
    if (p == 0)
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
    else if (p == size)
    {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < p - 1; i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next->prev = newnode;
        temp->next = newnode;
        newnode->prev = temp;
    }
    print_from_left(head);
    print_from_right(tail);
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
        insert_at_position(head, tail, x, v);
    }
    return 0;
}