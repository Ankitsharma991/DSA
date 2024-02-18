#include <bits/stdc++.h>
#include "TreeNode.cpp"
using namespace std;

class NodeValue
{
public:
    int maxNode, minNode, maxSize;
    NodeValue(int maxNode, int minNode, int maxSize)
    {
        this->maxNode = maxNode;
        this->minNode = minNode;
        this->maxSize = maxSize;
    }
};
class Solution
{
private:
    NodeValue largestBSTSubtreeHelper(TreeNode *root)
    {
        if (!root)
        {
            return NodeValue(INT_MAX, INT_MIN, 0);
        }

        auto left = largestBSTSubtreeHelper(root->left);
        auto right = largestBSTSubtreeHelper(root->right);

        if (left.maxNode < root->val && root->val < right.minNode)
        {
            return NodeValue(min(root->val, left.minNode), max(root->val, right.maxNode), left.maxSize + right.maxSize + 1);
        }
        return NodeValue(INT_MIN, INT_MAX, max(left.maxSize, right.maxSize));
    }

public:
    int largestBSTSubtree(TreeNode *root)
    {
        return largestBSTSubtreeHelper(root).maxSize;
    }
};

int main()
{

    return 0;
}