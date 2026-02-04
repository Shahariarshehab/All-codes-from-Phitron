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
double find_median(Node *head)
{
    if(head==NULL)
    {
        return 0.0;
    }
    Node *slow=head;
    Node *fast=head;
    Node *prev=NULL;
    while(fast&&fast->next)
    {
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    if(fast!=NULL)
    {
        return slow->val;
    }
    return (prev->val+slow->val)/2.0;
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
    while ( cin >> val&&val != -1)
    {
        insert_sorted(head, val);
    }
    print_linked_list(head);
    double median=find_median(head);
    cout<<"Median: "<<median<<"\n";
    return 0;
}