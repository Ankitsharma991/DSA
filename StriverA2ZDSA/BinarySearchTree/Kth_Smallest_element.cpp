#include <bits/stdc++.h>
#include "TreeNode.cpp"
using namespace std;

int kthSmallest(TreeNode *root, int &k)
{
    if (root == NULL)
    {
        return -1;
    }
    int temp = kthSmallest(root->left, k);
    if (temp != -1)
    {
        return temp;
    }
    k--;
    if (k == 0)
    {
        return root->val;
    }
    return kthSmallest(root->right, k);
}

int main()
{

    return 0;
}