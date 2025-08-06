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
int depth(Node *root)
{
    if (!root)
        return 0;

    return 1 + max(depth(root->left), depth(root->left));
}
int cunt_nodes(Node *root)
{
    if (!root)
        return 0;
    else
        return 1 + cunt_nodes(root->left) + cunt_nodes(root->right);
}
bool perfect_binary_tree(Node *root, int depth, int level = 1)
{
    if (!root)
        return true;
    if (!root->left && !root->right)
        return depth == level;
    if (!root->left || !root->right)
        return false;
    return perfect_binary_tree(root->left, depth, level + 1) &&
           perfect_binary_tree(root->right, depth, level + 1);
}

int main()
{

    Node *root = input_tree();
    int d = depth(root);
    int totalNodes = cunt_nodes(root);
    if (totalNodes == (pow(2, d) - 1) && perfect_binary_tree(root, d))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}