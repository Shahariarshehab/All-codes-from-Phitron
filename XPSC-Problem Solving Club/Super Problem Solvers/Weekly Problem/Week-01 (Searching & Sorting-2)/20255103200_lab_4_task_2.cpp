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
void print_reverse(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    print_reverse(head->next);
    cout << head->val<<" ";
}
int main()
{
    Node *head = NULL;

    int val;
    while (cin >> val&&val!=-1)
    {
        insert_sorted(head, val);
    }
    print_reverse(head);
    cout << "\n";

    return 0;
}