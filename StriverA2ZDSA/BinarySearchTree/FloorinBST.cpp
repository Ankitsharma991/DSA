#include <bits/stdc++.h>
#include "TreeNode.cpp"
using namespace std;

int floorBST(TreeNode *root, int key)
{
    if (root == NULL)
    {
        return -1;
    }
    int floorValue = -1;
    while (root)
    {
        if (root->val == key)
        {
            floorValue = root->val;
            return floorValue;
        }
        else if (root->val > key)
        {
            root = root->left;
        }
        else
        {
            floorValue = root->val;
            root = root->right;
        }
    }
    return floorValue;
}
int main()
{

    return 0;
}