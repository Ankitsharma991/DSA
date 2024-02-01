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

void storeInorder(TreeNode *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }
    storeInorder(root->left, ans);
    storeInorder(root->right, ans);
    ans.push_back(root->val);
}

vector<int> postorderTraversal(TreeNode *root)
{
    vector<int> result;
    storeInorder(root, result);
    return result;
}

int main()
{

    return 0;
}