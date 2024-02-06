#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data)
    {
        this->val = data;
        left = NULL;
        right = NULL;
    }
};

bool isSymmetric(TreeNode *root)
{
    return root == NULL || isSymmetricHelp(root->left, root->right);
}

bool isSymmetricHelp(TreeNode *left, TreeNode *right)
{
    if (left == NULL || right == NULL)
    {
        return left == right;
    }
    if (left->val != right->val)
    {
        return false;
    }
    return isSymmetricHelp(left->right, right->left) && isSymmetricHelp(left->left, right->right);
}

int main()
{

    return 0;
}