#include <bits/stdc++.h>
#include "TreeNode.cpp"
using namespace std;

TreeNode *insertNode(TreeNode *root, int val)
{
    if (root == NULL)
    {
        return new TreeNode(val);
    }
    TreeNode *temp = root;
    while (true)
    {
        if (temp->val <= val)
        {
            if (temp->right != NULL)
                temp = temp->right;
            else
            {
                temp->right = new TreeNode(val);
                break;
            }
        }
        else
        {
            if (temp->left != NULL)
                temp = temp->left;
            else
            {
                temp->left = new TreeNode(val);
                break;
            }
        }
    }
    return root;
}

int main()
{

    return 0;
}