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
void storeTraversal(TreeNode *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }
    ans.push_back(root->val);
    storeTraversal(root->left, ans);
    storeTraversal(root->right, ans);
}

vector<int> preorderTraversal(TreeNode *root)
{
    vector<int> result;
    storeTraversal(root, result);
    return result;
}
int main()
{

    return 0;
}