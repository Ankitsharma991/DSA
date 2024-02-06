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

vector<int> topView(TreeNode *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;

    map<int, int> mpp;
    queue<pair<TreeNode *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        auto it = q.front();
        q.pop();
        TreeNode *node = it.first;
        int line = it.second;
        if (mpp.find(line) == mpp.end())
            mpp[line] = node->val;

        if (node->left != NULL)
        {
            q.push({node->left, line - 1});
        }
        if (node->right != NULL)
        {
            q.push({node->right, line + 1});
        }
    }
    for (auto it : mpp)
    {
        ans.push_back(it.second);
    }
    return ans;
}

int main()
{
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);

    topView(root);

    return 0;
}