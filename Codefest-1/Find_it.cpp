#include <bits/stdc++.h>
using namespace std;
#define MAX_VALUE 100001
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myleft, *myright;
        if (l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);
        if (r == -1)
            myright = NULL;
        else
            myright = new Node(r);

        p->left = myleft;
        p->right = myright;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
int freq[MAX_VALUE] = {0};
void count_leaf_freq(Node *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        freq[root->val]++;
        return;
    }
    count_leaf_freq(root->left);
    count_leaf_freq(root->right);
}
int most_freq_leaf(Node *root)
{
    count_leaf_freq(root);
    int max_freq = 0;
    int res = -1;
    for (int i = 0; i < MAX_VALUE; i++)
    {
        if (freq[i] > max_freq)
        {
            max_freq = freq[i];
            res = i;
        }
        else if (freq[i] == max_freq && freq[i] > 0 && i < res)
        {
            res = i;
        }
    }
    return res;
}
int main()
{
    Node *root = input_tree();
    int m = most_freq_leaf(root);
    cout << m;
    return 0;
}