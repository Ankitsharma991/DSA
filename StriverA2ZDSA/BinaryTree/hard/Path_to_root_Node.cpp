#include <bits/stdc++.h>
#include "TreeNode.cpp"

using namespace std;
// use inorder traversal for easier solution

bool getPath(TreeNode *root, vector<int> &arr, int x)
{
    if (root == NULL)
        return false;
    if (root->val == x)
        return true;
    arr.push_back(root->val);
    if (getPath(root->left, arr, x) || getPath(root->right, arr, x))
        return true;
    arr.pop_back();
    return false;
}

int main()
{
    TreeNode *root = new TreeNode(5);
    vector<int> arr;
    int x = 5;
    getPath(root, arr, x);

    return 0;
}