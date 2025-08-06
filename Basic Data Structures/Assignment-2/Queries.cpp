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
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insert_at_head(Node *&head, Node *&tail, int v)
{
    Node *newnode = new Node(v);
    newnode->next = head;
    head = newnode;
    if (tail == NULL)
    {
        tail = head;
    }
    print_linked_list(head);
}
void insert_at_tail(Node *&head, Node *&tail, int v)
{
    Node *newnode = new Node(v);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
    }

    print_linked_list(head);
}

void delete_by_idx(Node *&head, Node *&tail, int idx)
{
    if (head == NULL)
    {
        print_linked_list(head);
        return;
    }

    if (idx == 0)
    {
        Node *deletenode = head;
        head = head->next;
        delete deletenode;
        if (head == NULL)
        {
            tail = NULL;
        }
        print_linked_list(head);
        return;
    }

    Node *tmp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        if (tmp == NULL || tmp->next == NULL)
        {
            print_linked_list(head);
            return;
        }
        tmp = tmp->next;
    }

    if (tmp->next == NULL)
    {
        print_linked_list(head);
        return;
    }

    Node *deletenode = tmp->next;
    tmp->next = tmp->next->next;
    if (tmp->next == NULL)
    {
        tail = tmp;
    }
    delete deletenode;
    print_linked_list(head);
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
        if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        if (x == 1)
        {
            insert_at_tail(head, tail, v);
        }
        else if (x == 2)
        {
            delete_by_idx(head, tail, v);
        }
    }

    return 0;
}