#include <bits/stdc++.h>
#include "TreeNode.cpp"

using namespace std;

TreeNode *LCA(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if (root == NULL)
        return NULL;
    int curr = root->val;
    if (curr < p->val && curr < q->val)
    {
        return LCA(root->right, p, q);
    }
    if (curr > p->val && curr > q->val)
    {
        return LCA(root->left, p, q);
    }
    return root;
}

int main()
{

    return 0;
}