#include <bits/stdc++.h>
using namespace std;
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
void l_side(Node *root, vector<int> &res)
{
    while (root)
    {
        res.push_back(root->val);
        if (root->left)
            root = root->left;
        else
            root = root->right;
    }
}
void r_side(Node *root, vector<int> &res)
{
    while (root)
    {
        res.push_back(root->val);
        if (root->right)
            root = root->right;
        else
            root = root->left;
    }
}
int main()
{
    Node *root = input_tree();
    if (!root)
        return 0;
    vector<int> l_path, r_path;
    l_side(root->left, l_path);
    reverse(l_path.begin(), l_path.end());
    r_side(root->right, r_path);
    for (int val : l_path)
    {
        cout << val << " ";
    }
    cout << root->val << " ";
    for (int val : r_path)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}