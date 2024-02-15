#include <bits/stdc++.h>
#include "TreeNode.cpp"

using namespace std;

TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
    // base case
    if (root == NULL || root == p || root == q)
    {
        return root;
    }

    TreeNode *left = lowestCommonAncestor(root->left, p, q);
    TreeNode *right = lowestCommonAncestor(root->right, p, q);

    // result
    if (left == NULL)
    {
        return right;
    }
    else if (right == NULL)
    {
        return left;
    }
    else
    {
        return root;
    }
}

int main()
{

    return 0;
}