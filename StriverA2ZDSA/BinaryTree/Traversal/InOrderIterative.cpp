#include <bits/stdc++.h>
using namespace std;
// left root right-> inorder traversal
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

vector<int> preOrderIterative(TreeNode *root)
{
    stack<TreeNode *> st;
    TreeNode *node = root;
    vector<int> inorder;
    while (true)
    {
        if (node != NULL)
        {
            st.push(node);
            node = node->left;
        }
        else
        {
            if (st.empty() == true)
                break;
            node = st.top();
            st.pop();
            inorder.push_back(node->val);
            node = node->right;
        }
    }
    return inorder;
}

int main()
{

    return 0;
}