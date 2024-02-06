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

int height(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + max(height(root->left), height(root->right));
}

bool isBalanced(TreeNode *root)
{
    if (root == NULL)
    {
        return true;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return isBalanced(root->left) && isBalanced(root->right) && abs(leftHeight - rightHeight) <= 1;
}
int main()
{

    return 0;
}