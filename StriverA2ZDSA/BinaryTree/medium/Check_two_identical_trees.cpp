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

bool isSame(TreeNode *p, TreeNode *q)
{
    if (p == NULL || q == NULL)
    {
        return p == q;
    }
    return (p->val == q->val) && isSame(p->left, q->left) && isSame(p->right, q->right);
}
int main()
{

    return 0;
}