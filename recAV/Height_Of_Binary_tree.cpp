#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *left;
    Node *right;
    int data;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

int heightOfBinaryTree(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = heightOfBinaryTree(root->left);
    int right = heightOfBinaryTree(root->right);
    return 1 + max(left, right);
}

int main()
{

    return 0;
}