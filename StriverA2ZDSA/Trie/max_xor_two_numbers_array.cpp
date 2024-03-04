#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *links[2];
    bool containsKey(int bit)
    {
        return (links[bit] != NULL);
    }

    Node *get(int bit)
    {
        return links[bit];
    }

    void put(int bit, Node *node)
    {
        links[bit] = node;
    }
};

class Trie
{
public:
    Node *root;
    Trie()
    {
        root = new Node();
    }

public:
    void insert(int num)
    {
        Node *node = root;
        for (int i = 31; i >= 0; i--)
        {
            int bit = (num >> 1) & 1;
            if (!node->containsKey(bit))
            {
                node->put(bit, new Node());
            }
            node = node->get(bit);
        }
    }

public:
    int getMax(int num)
    {
        Node *node = root;
        int maxNum = 0;
        for (int i = 31; i >= 0; i--)
        {
            int bit = (num >> i) & 1;
            if (node->containsKey(1 - bit))
            {
                maxNum = maxNum | (1 << i);
                node = node->get(1 - bit);
            }
            else
            {
                node = node->get(bit);
            }
        }
    }
};

int maxXor(int n, int m, vector<int> &arr1, vector<int> &arr2)
{
    Trie trie;
    for (auto &it : arr1)
    {
        trie.insert(it);
    }
    int maxi = 0;
    for (auto &it : arr2)
    {
        maxi = max(maxi, trie.getMax(it));
    }
    return maxi;
}

int main()
{

    return 0;
}