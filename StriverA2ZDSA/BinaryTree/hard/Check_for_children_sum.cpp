#include <bits/stdc++.h>
#include "TreeNode.cpp"
using namespace std;

void changeTree(TreeNode *root)
{
    if (root == NULL)
        return;
    int child = 0;
    if (root->left)
    {
        child += root->left->val;
    }
    if (root->right)
    {
        child += root->right->val;
    }
    if (child >= root->val)
        root->val = child;
    else
    {
        if (root->left)
            root->left->val = root->val;
        else if (root->right)
            root->right->val = root->val;
    }
    // reorder(root->left);
    // reorder(root->right);

    int tot = 0;
    if (root->left)
        tot += root->left->val;
    if (root->right)
        tot += root->right->val;
    if (root->left || root->right)
        root->val = tot;
}

int main()
{

    return 0;
}