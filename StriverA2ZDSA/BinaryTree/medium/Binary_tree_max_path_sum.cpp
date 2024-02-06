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

int maxSum(TreeNode *root, int &maxi)
{
    if (root == nullptr)
    {
        return 0;
    }

    int left = max(0, maxSum(root->left, maxi));
    int right = max(0, maxSum(root->right, maxi));

    maxi = max(maxi, left + right + root->val);

    return root->val + max(left, right);
}

int maxPathSum(TreeNode *root)
{
    int maxi = INT_MIN;
    maxSum(root, maxi);
    return maxi;
}
int main()
{

    return 0;
}