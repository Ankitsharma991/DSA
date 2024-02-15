#include <bits/stdc++.h>
#include "TreeNode.cpp"
using namespace std;

int ceilBST(TreeNode *root, int val)
{
    if (root == NULL)
    {
        return 0;
    }
    int ceil = -1;
    while (root)
    {
        if (root->val == val)
        {
            ceil = root->val;
            return ceil;
        }
        if (val > root->val)
        {
            root = root->right;
        }
        else
        {
            ceil = root->val;
            root = root->left;
        }
    }
    return ceil;
}

int main()
{

    return 0;
}