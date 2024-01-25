#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode(int val)
    {
        this->val = val;
        next = NULL;
        prev = NULL;
    }
};

ListNode *findTail(ListNode *head)
{
    ListNode *tail = head;
    while (tail->next != NULL)
        tail = tail->next;
    return tail;
}

vector<pair<int, int>> findPairs(ListNode *head, int k)
{
    vector<pair<int, int>> ans;
    if (head == NULL)
        return ans;
    ListNode *left = head;
    ListNode *right = findTail(head);
    while (left->val < right->val)
    {
        if (left->val + right->val == k)
        {
            ans.push_back({left->val, right->val});
            left = left->next;
            right = right->prev;
        }
        else if (left->val + right->val < k)
        {
            left = left->next;
        }
        else
        {
            right = right->prev;
        }
    }
    return ans;
}
int main()
{

    return 0;
}