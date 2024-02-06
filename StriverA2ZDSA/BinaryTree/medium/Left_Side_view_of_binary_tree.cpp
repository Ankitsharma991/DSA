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

vector<int> leftView(TreeNode *root)
{
    vector<int> res;
    recursion(root, 0, res);
    return res;
}

void recursion(TreeNode *root, int level, vector<int> &res)
{
    if (root == NULL)
        return;
    if (res.size() == level)
        res.push_back(root->val);
    recursion(root->left, level + 1, res);
    recursion(root->right, level + 1, res);
}

int main()
{

    return 0;
}