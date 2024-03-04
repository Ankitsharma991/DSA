#include <bits/stdc++.h>
#include "Longest_string_with_all_prefixes.cpp"
using namespace std;

int countDistinctSubstring(string &s)
{
    int cnt = 0;
    Node *root = new Node();
    for (int i = 0; i < s.length(); i++)
    {
        Node *node = root;
        for (int j = i; j < s.length(); j++)
        {
            if (!node->containsKey(s[i]))
            {
                cnt++;
                node->put(s[i], new Node());
            }
            node = node->get(s[i]);
        }
    }
    return cnt + 1;
}
int main()
{

    return 0;
}