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

int cycleLength(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    bool noCycle = false;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;

        if (slow == fast)
        {
            noCycle = true;
            break;
        }
    }
    if (noCycle)
    {
        return 0;
    }
    int count = 1;
    slow = slow->next;
    while (slow != fast)
    {
        count++;
        slow = slow->next;
    }
    return count;
}

int main()
{

    return 0;
}