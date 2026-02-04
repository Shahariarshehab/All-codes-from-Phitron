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
void delete_val(Node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }
    if (head->val == val)
    {
        Node *deletenode = head;
        head = head->next;
        delete deletenode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL && tmp->next->val != val)
    {
        tmp = tmp->next;
    }
    if (tmp->next != NULL)
    {
        Node *deletenode = tmp->next;
        tmp->next = tmp->next->next;
        delete deletenode;
    }
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
    Node *head = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_sorted(head, val);
    }
    int in, del;
    cin >> in >> del;
    insert_sorted(head, in);
    cout << "Sorted List After Insertion: ";
    print_linked_list(head);
    delete_val(head, del);
    cout << "Sorted List After Deletion: ";
    print_linked_list(head);
    return 0;
}