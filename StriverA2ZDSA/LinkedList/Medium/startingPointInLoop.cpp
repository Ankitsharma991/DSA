#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int data)
    {
        this->val = data;
        next = NULL;
    }
};

ListNode *nodeCycle(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return fast;
        }
    }
    return NULL;
}
ListNode *detectCycle(ListNode *head)
{
    ListNode *slow = head;
    ListNode *temp = nodeCycle(head);
    if (temp == NULL)
    {
        return NULL;
    }
    else
    {
        while (slow != temp)
        {
            slow = slow->next;
            temp = temp->next;
        }
    }
    return slow;
}

int main()
{

    return 0;
}