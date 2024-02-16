#include <bits/stdc++.h>
#include "TreeNode.cpp"

using namespace std;

bool isValidate(TreeNode *root)
{
    return isValidateHelper(root, INT_MIN, INT_MAX);
}

bool isValidateHelper(TreeNode *root, int lower, int upper)
{
    if (root == NULL)
    {
        return true;
    }
    if (root->val <= lower && root->val >= upper)
    {
        return false;
    }

    return isValidateHelper(root->left, lower, upper) && isValidateHelper(root->right, lower, upper);
}

int main()
{

    return 0;
}