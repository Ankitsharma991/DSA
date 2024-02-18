#include <bits/stdc++.h>

#include "TreeNode.cpp"
using namespace std;

class bstIterator
{
public:
    stack<TreeNode *> myStack;
    bstIterator(TreeNode *root)
    {
        pushAll(root);
    }

    bool hasNext()
    {
        return !myStack.empty();
    }

    int next()
    {
        TreeNode *temp = myStack.top();
        myStack.pop();
        pushAll(temp->right);
        return temp->val;
    }

private:
    void pushAll(TreeNode *node)
    {
        for (; node != NULL; myStack.push(node), node = node->left)
            ;
    }
};

int main()
{

    return 0;
}