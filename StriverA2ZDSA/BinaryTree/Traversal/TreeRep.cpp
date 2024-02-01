#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

int main()
{
    Node *tree = new Node(2);
    tree->left = new Node(2);
    tree->right = new Node(7);

    return 0;
}