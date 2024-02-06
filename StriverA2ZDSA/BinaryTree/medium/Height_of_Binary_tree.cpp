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

int heightOfTree(TreeNode *root)
{
    if (root == NULL)
    {
        return 1;
    }
    return 1 + max(heightOfTree(root->left), heightOfTree(root->right));
}

int main()
{

    return 0;
}