#include <bits/stdc++.h>
#include "TreeNode.cpp"
using namespace std;

TreeNode *inorderSuccessor(TreeNode *root, TreeNode *p)
{
    TreeNode *successor = NULL;
    while (root != NULL)
    {
        if (p->val >= root->val)
        {
            root = root->right;
        }
        else
        {
            successor = root;
            root = root->left;
        }
    }
    return successor;
}