#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_sorted(Node *&head, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL || val < head->val)
    {
        newnode->next = head;
        head = newnode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL && tmp->next->val < val)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}
void merge(Node *&head1, Node *&head2)
{
    if (!head1)
    {
        head1 = head2;
        return;
    }
    if (!head2)
        return;
    Node *p1 = head1;
    Node *p2 = head2;

    Node *merged = NULL;
    Node *tail = NULL;
    if (p1->val < p2->val)
    {
        merged = tail = p1;
        p1 = p1->next;
    }
    else
    {
        merged = tail = p2;
        p2 = p2->next;
    }
    while (p1 && p2)
    {
        if (p1->val < p2->val)
        {
            tail->next = p1;
            p1 = p1->next;
        }
        else
        {
            tail->next = p2;
            p2 = p2->next;
        }
        tail = tail->next;
    }
    if (p1)
    {
        tail->next = p1;
    }
    if (p2)
    {
        tail->next = p2;
    }
    head1 = merged;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << "\n";
}
int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    int val1, val2;
    while (cin >> val1 && val1 != -1)
    {
        insert_sorted(head1, val1);
    }
    while (cin >> val2 && val2 != -1)
    {
        insert_sorted(head2, val2);
    }
    merge(head1, head2);
    print_linked_list(head1);
    return 0;
}