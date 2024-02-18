#include <bits/stdc++.h>
#include "TreeNode.cpp"
using namespace std;

vector<int> inorderTraversal(TreeNode *root, vector<int> &arr)
{
    if (root == NULL)
    {
        return arr;
    }
    return inorderTraversal(root->left, arr);
    arr.push_back(root->val);
    return inorderTraversal(root->right, arr);
}

bool findTarget(TreeNode *root, int k)
{
    if (root == NULL || (root->left == NULL && root->right == NULL))
    {
        return false;
    }
    vector<int> arr;
    inorderTraversal(root, arr);
    int n = arr.size();
    int j = n - 1;
    int i = 0;
    // int sum =
    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (sum == k)
        {
            return true;
        }
        else if (sum > k)
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    return false;
}

// optimized code
class BSTIterator
{
    stack<TreeNode *> myStack;
    bool reverse = true;

public:
    BSTIterator(TreeNode *root, bool isReverse)
    {
        reverse = isReverse;
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
        if (!reverse)
            pushAll(temp->right);
        else
            pushAll(temp->left);
        return temp->val;
    }

private:
    void pushAll(TreeNode *root)
    {
        for (; root != NULL;)
        {
            myStack.push(root);
            if (reverse == true)
            {
                root = root->right;
            }
            else
            {
                root = root->left;
            }
        }
    }
};

class solution
{
public:
    bool findTarget(TreeNode *root, int k)
    {
        if (!root)
            return false;

        BSTIterator l(root, false);
        BSTIterator r(root, true);

        int i = l.next();
        int j = r.next();

        while (i < j)
        {
            if (i + j == k)
            {
                return true;
            }
            else if (i + j < k)
                i = l.next();
            else
                j = r.next();
        }

        return false;
    }
};
