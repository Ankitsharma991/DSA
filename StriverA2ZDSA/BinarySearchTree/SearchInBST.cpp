#include <bits/stdc++.h>
#include "TreeNode.cpp"

using namespace std;

bool search(TreeNode *root, int value)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->val > value)
    {
        return search(root->left, value);
    }
    else if (root->val < value)
    {
        return search(root->right, value);
    }
    return true;
}

int main()
{

    return 0;
}