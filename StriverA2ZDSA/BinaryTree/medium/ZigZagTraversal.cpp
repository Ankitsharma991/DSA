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

vector<vector<int>> zigZagTraversal(TreeNode *root)
{
#include <vector>
#include <queue>
    using namespace std;

    class Solution
    {
    public:
        vector<vector<int>> zigzagLevelOrder(TreeNode *root)
        {
            vector<vector<int>> ans;
            if (root == NULL)
            {
                return ans;
            }

            queue<TreeNode *> q;
            bool flag = true; // left: 0 to 1 and right: 1 to 0
            q.push(root);

            while (!q.empty())
            {
                int size = q.size();
                vector<int> row;

                for (int i = 0; i < size; i++)
                {
                    TreeNode *node = q.front();
                    q.pop();

                    // find position to fill the nodes value
                    if (flag)
                    {
                        row.push_back(node->val);
                    }
                    else
                    {
                        row.insert(row.begin(), node->val);
                    }

                    if (node->left)
                    {
                        q.push(node->left);
                    }
                    if (node->right)
                    {
                        q.push(node->right);
                    }
                }

                // after this level
                flag = !flag;
                ans.push_back(row);
            }

            return ans;
        }
    };
}

int main()
{

    return 0;
}