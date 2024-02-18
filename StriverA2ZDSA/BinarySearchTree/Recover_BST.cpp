#include <bits/stdc++.h>
#include "TreeNode.cpp"
using namespace std;

class Recover
{
public:
    TreeNode *prev;
    TreeNode *first;
    TreeNode *middle;
    TreeNode *last;

    void inorderTraversal(TreeNode *root)
    {
        if (root == NULL)
            return;
        inorderTraversal(root->left);
        if (prev != NULL && (root->val < prev->val))
        {
            if (first == NULL)
            {
                first = prev;
                middle = root;
            }
            else
            {
                last = root;
            }
        }
        prev = root;

        inorderTraversal(root->right);
    }

    void recoverTree(TreeNode *root)
    {
        first = middle = last = NULL;
        prev = new TreeNode(INT_MIN);
        inorderTraversal(root);
        if (first && last)
        {
            swap(first->val, last->val);
        }
        else if (first && middle)
        {
            swap(first->val, middle->val);
        }
    };
};

int main()
{

    return 0;
}